//============================================================================
// Name        : Muhammad Waqas Shahid Khan
// ID          : 22I - 2469
//             : PROJECT
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Battleship.
//============================================================================


#ifndef Battleship_CPP_
#define Battleship_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<fstream>
#include"CImg.h"
#include<cmath>// for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */

int* score_array = new int [10];
int x_store[10];
int y_store [10];
int x_1 = 800, y_1 = 400;
int x_2 = 700, y_2 = 300;
int x_3 = 950, y_3 = 300;
int x_4 = 600, y_4 = 200;
int x_5 = 750, y_5 = 200;
int x_6 = 900, y_6 = 200;
int x_7 = 600, y_7 = 100;
int x_8 = 700, y_8 = 100;
int x_9 = 800, y_9 = 100;
int x_10 = 900, y_10 = 100;


int score = 0;
string name ;

int x_axis1 = 0, y_axis1 = 0; // FINISH

int x12 = 0, y12 = 0; // FINISH IT

int xI = 400, yI = 400;
int* grid_x = new int [10];
int* grid_y = new int [10];
// FOR BS LENGHT = 1
int game_x1 = 0;
int game_y1 = 0;
int game_x2 = 0;
int game_y2 = 0;
int game_x3 = 0;
int game_y3 = 0;
int game_x4 = 0;
int game_y4 = 0;

// FOR BS LENGHT = 2
int game_x51 = 0;
int game_y51 = 0;
int game_x52 = 0;
int game_y52 = 0;
int game_x61 = 0;
int game_y62 = 0;
int game_x71 = 0;
int game_y72 = 0;

//FOR BS L = 3 
int game_x81 = 0;
int game_y81 = 0;
int game_x82 = 0;
int game_y82 = 0;
int game_x83 = 0;
int game_y83 = 0;
int game_x91 = 0;
int game_y91 = 0;
int game_x92 = 0;
int game_y92 = 0;
int game_x93 = 0;
int game_y93 = 0;

// FOR BS L=4
int game_x101 = 0;
int game_y101 = 0;
int game_x102 = 0;
int game_y102 = 0;
int game_x103 = 0;
int game_y103 = 0;
int game_x104 = 0;
int game_y104 = 0;

int gap = 0;

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
	{
		//do something if b is pressed
		cout << "b pressed" << endl;
	}
	if (key == 'f' || key == 'F')
	{
		glutFullScreen();
	}
	if (key == 'L' || key == 'l')
	{
		glutLeaveFullScreen();
	}


	glutPostRedisplay();
}


/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
	// POINTER MOVING CORDINATES WITH RIGHT OR LEFT
	//moveObject();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */

void MouseMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}

// Moving box function
void drawObject() {

	DrawSquare(xI, yI, 20, colors[BLACK]);

	glutPostRedisplay();
}


bool flag = true;
void moveObject() {

	if (xI > 10 && flag) {
		xI -= 10;
		cout << "going left";
		if (xI < 100)

			flag = false;

	}
	else if (xI < 1010 && !flag) {
		cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}

void NonPrintableKeys(int key, int x, int y) {
	if (key
		== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;

	}
	else if (key
		== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	}
	else if (key
		== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	}

	else if (key
		== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) // dealing only with left button
	{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;
	}
	glutPostRedisplay();
}

void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;

	// First Values x_1 = 800 and y_2 = 400;
	if ((x >= x_1) && (x <= (x_1 + 180)) && (y >= (700-y_1-50)) && (y <= 700 - y_1 ))	
	{
		x_1 = x - 70;
		y_1 = -y + 670; 
		x_store[0] = x_1;
		y_store[0] = y_1;
	}
	
	if ((x >= x_2) && (x <= (x_2 + 135)) && (y >= (700-y_2-50)) && (y <= 700 - y_2 ))	
	{
		x_2 = x - 70;
		y_2 = -y + 670;
		x_store[1] = x_2;
		y_store[1] = y_2;
	}

	if ((x >= x_3) && (x <= (x_3 + 135)) && (y >= (700 - y_3 - 50)) && (y <= 700 - y_3))
	{
		x_3 = x - 70;
		y_3 = -y + 670;
		x_store[2] = x_3;
		y_store[2] = y_3;
	}

	if ((x >= x_4) && (x <= (x_4 + 135)) && (y >= (700 - y_4 - 50)) && (y <= 700 - y_4))
	{
		x_4 = x - 30;
		y_4 = -y + 670;
		x_store[3] = x_4;
		y_store[3] = y_4;
	}

	if ((x >= x_5) && (x <= (x_5 + 135)) && (y >= (700 - y_5 - 50)) && (y <= 700 - y_5))
	{
		x_5 = x - 30;
		y_5 = -y + 670;
		x_store[4] = x_5;
		y_store[4] = y_5;
	}

	if ((x >= x_6) && (x <= (x_6 + 135)) && (y >= (700 - y_6 - 50)) && (y <= 700 - y_6))
	{
		x_6 = x - 30;
		y_6 = -y + 670;
		x_store[5] = x_6;
		y_store[5] = y_6;
	}

	if ((x >= x_7) && (x <= (x_7 + 135)) && (y >= (700 - y_7 - 50)) && (y <= 700 - y_7))
	{
		x_7 = x - 30;
		y_7 = -y + 670;
		x_store[6] = x_7;
		y_store[6] = y_7;
	}

	if ((x >= x_8) && (x <= (x_8 + 135)) && (y >= (700 - y_8 - 50)) && (y <= 700 - y_8))
	{
		x_8 = x - 30;
		y_8 = -y + 670;
		x_store[7] = x_8;
		y_store[7] = y_8;
	}

	if ((x >= x_9) && (x <= (x_9 + 135)) && (y >= (700 - y_9 - 50)) && (y <= 700 - y_9))
	{
		x_9 = x - 30;
		y_9 = -y + 670;
		x_store[8] = x_9;
		y_store[8] = y_9;
	}

	if ((x >= x_10) && (x <= (x_10 + 135)) && (y >= (700 - y_10 - 50)) && (y <= 700 - y_10))
	{
		x_10 = x -30;
		y_10 = -y + 670;
		x_store[9] = x_10;
		y_store[9] = y_10;
	}

	game_x1 = x; //WHEN GAME STARTS
	game_y1 = y;
	// FOR BS LENGHT = 1
	
	 game_x2 = x;
	 game_y2 = y;
	 game_x3 = x;
	 game_y3 = y;
	 game_x4 = x;
	 game_y4 = y;

	// FOR BS LENGHT = 2
	 game_x51 = x;
	 game_y51 = y;
	 game_x52 = x;
	 game_y52 = y;
	 game_x61 = x;
	 game_y62 = y;
	 game_x71 = x;
	 game_y72 = y;

	//FOR BS L = 3 
	 game_x81 = x;
	 game_y82 = y;
	 game_x82 = x;
	 game_y82 = y;
	 game_x83 = x;
	 game_y83 = y;
	 game_x91 = x;
	 game_y91 = y;
	 game_x92 = x;
	 game_y92 = y;
	 game_x93 = x;
	 game_y93 = y;

	// FOR BS L=4
	 game_x101 = x;
	 game_y101 = y;
	 game_x102 = x;
	 game_y102 = y;
	 game_x103 = x;
	 game_y103 = y;
	 game_x104 = x;
	game_y104 = y;


	x12 = x;
	
	y12 = y;
	
	x_axis1 = x - 850;
	y_axis1 = -y + 280;
	
	glutPostRedisplay();
}

void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

/*
 * Main Canvas drawing function.
 * */

int submenu1()
{

	DrawString(430, 630, "Enter Your Name", colors[GOLD]); // BS COLOR----------------------------------------------------------------------------------------------------
	DrawRoundRect(880, 650, 300, 46, colors[DARK_SEA_GREEN], 10);
	DrawString(950, 665, "Enter", colors[BLACK]);
	cout << x12 << "x12" << "y12" << y12 << endl;
	if ((x12 < 1180 && x12>880) && (y12 < 50 && y12>0))
	{
		cout << "here";
		return 10;
	}
	else
	{
		return 0;
	}
}

// Option1 - 4 display options on start menu and return values to trigger when pressed
int option1()
{
	DrawString(5, 680, "Press ESC To Exit", colors[WHITE]);
	DrawString(430, 630, "Welcome To Battleship Game By Waqas", colors[GOLD]);
	// x1 y1 length height color widthofborder
	DrawRoundRect(480, 450, 300, 46, colors[DARK_SEA_GREEN], 10);
	DrawString(550, 465, "View Leaderboard", colors[BLACK]);
	if ((x12 > 478 && x12 < 785) && (y12 > 200 && y12 < 255))
	{
		return 10;
	}
	else
	{
		return 0;
	}
}

int option2()
{
	// x1 y1 length height color widthofborder
	DrawRoundRect(480, 350, 300, 46, colors[DARK_SEA_GREEN], 10);
	DrawString(550, 365, "Start New Game", colors[BLACK]);
	if ((x12 > 478 && x12 < 785) && (y12 > 300 && y12 < 355))
	{
		return 10;
	}
	else
	{
		return 0;
	}
}

int option3()
{
	// x1 y1 length height color widthofborder
	DrawRoundRect(480, 250, 300, 46, colors[DARK_SEA_GREEN], 10);
	DrawString(550, 265, "View Balance", colors[BLACK]);
	if ((x12 > 478 && x12 < 785) && (y12 > 400 && y12 < 455))
	{
		return 10;
	}
	else
	{
		return 0;
	}
}

int option4()
{
	// x1 y1 length height color widthofborder
	DrawRoundRect(480, 150, 300, 46, colors[DARK_SEA_GREEN], 10);
	DrawString(600, 165, "Options", colors[BLACK]);
	if ((x12 > 478 && x12 < 785) && (y12 > 500 && y12 < 555))
	{
		return 10;
	}
	else
	{
		return 0;
	}
}

// Displays auto button and returns a value if pressed or not
int autoButton()
{
	DrawRoundRect(500, 30, 130, 46, colors[DARK_SEA_GREEN], 10);
	DrawString(540, 40, "Auto", colors[BLACK]);
	if ((x12 > 500 && x12 < 630) && (y12 < 665 && y12 > 625))
	{ 
		return 10;
	}
	else
	{
		return 0;
	}
}

// Displays Next button and return a value when and when not pressed

int nextButton()
{
	DrawRoundRect(1100, 630, 130, 46, colors[DARK_SEA_GREEN], 10);
	DrawString(1130, 645, "NEXT", colors[BLACK]);
	if ((x12 > 1100 && x12 < 1230) && (y12 < 70 && y12 > 25))
	{
		return 10;
	}
	else
	{
		return 0;
	}
}

// Battleships 1 of lenght 4 
void  battleship1_l4()
{
	// x1 y1 pointer x2y2 are upper and x3y3 lower points!
	DrawTriangle(x_1-45, y_1 + 23 , x_1, y_1 + 46, x_1, y_1, colors[DARK_SEA_GREEN]);
	DrawRoundRect(x_1 , y_1, 135 , 46 , colors[DARK_SEA_GREEN], 1);

	//if ((x12 < 895 && x12 > 760) && (y12 < 446 && y12 > 400))
}

// Battleships 2 of lenght 3 
void battleship1_l3()
{
	DrawTriangle(x_2 - 45, y_2+23, x_2, y_2 + 46, x_2, y_2, colors[DARK_SEA_GREEN]);
	// x1 y1 length height color widthofborder
	DrawRoundRect(x_2, y_2, 90 , 46, colors[DARK_SEA_GREEN], 1);
	//if ((x12 < 790 && x12 > 675) && (y12 < 346 && y12 > 300))
	
}

void battleship2_l3()
{
	DrawTriangle(x_3 -45 , y_3 + 23 , x_3 , y_3+46, x_3 , y_3, colors[DARK_SEA_GREEN]);
	DrawRoundRect(x_3, y_3, 90, 46, colors[DARK_SEA_GREEN], 1);
} 

// Battleships 3 of lenght 2 
void battleship1_l2()
{
	DrawTriangle(x_4-45, y_4+23 , x_4, y_4 +46, x_4, y_4, colors[DARK_SEA_GREEN]);
	DrawRoundRect(x_4, y_4, 45, 46, colors[DARK_SEA_GREEN], 1);
	
}

void battleship2_l2()
{
	DrawTriangle(x_5-45, y_5+23, x_5, y_5+46, x_5, y_5, colors[DARK_SEA_GREEN]);
	DrawRoundRect(x_5, y_5, 45, 46, colors[DARK_SEA_GREEN], 1);
}

void battleship3_l2()
{
	DrawTriangle(x_6-45, y_6+23 , x_6, y_6+46 , x_6, y_6, colors[DARK_SEA_GREEN]);
	DrawRoundRect(x_6, y_6, 45, 46 , colors[DARK_SEA_GREEN], 1);
}

// Battleships 4 of lenght 1 
void battleship1_l1()
{
	DrawTriangle(x_7, y_7+23, x_7+45 , y_7+46, x_7+45 , y_7, colors[DARK_SEA_GREEN]);
}

void battleship2_l1()
{
	DrawTriangle(x_8, y_8+23, x_8+45, y_8+46, x_8+45, y_8, colors[DARK_SEA_GREEN]);
}

void battleship3_l1()
{
	DrawTriangle(x_9, y_9+23, x_9+45, y_9+46, x_9+45, y_9, colors[DARK_SEA_GREEN]);
	//if ((x12 < 800 && x12 > 845) && (y12 < 146 && y12 > 100);
}

void  battleship4_l1()
{
	DrawTriangle(x_10, y_10 + 23, x_10+45 , y_10+46, x_10+45, y_10, colors[DARK_SEA_GREEN]);
	//if ((x12 < 900 && x12 > 945) && (y12 < 146 && y12 > 100))
}

// ---------------------GAME START AFTER AUTO DISPLAY
void gameStartDisplay2()
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	DrawString(10, 680, "Game Started!", colors[WHITE]);


	DrawLine(700, 10, 700 , 470, 5, colors[BLUE]);    	// LINE 1 FROM BOTTOM LEFT TO UP
	DrawLine(700, 470, 1160, 470, 5, colors[BLUE]);    // LINE 2 FROM LEFT TO RIGHT UPPER 
	DrawLine(700, 10, 1160, 10, 5, colors[BLUE]);      // LINE 3 FROM LEFT TO RIGHT LOWER
	DrawLine(1160, 10, 1160, 470, 5, colors[BLUE]);	// LINE 4 FROM Bottom right TO UP
	int spacer_1 = 10;
	// Horizontal lines
	for (int i = 0; i < 9; i++)
	{
		spacer_1 = spacer_1 + 46;
		DrawLine(700, spacer_1, 1160, spacer_1, 3, colors[BLUE]);
	}
	
	spacer_1 = 700;
	// Vertical Lines
	for (int i = 0; i < 9; i++)
	{
		spacer_1 = spacer_1 + 46;
		DrawLine(spacer_1, 10, spacer_1, 470, 3, colors[BLUE]);
	}


	// PLAYER 1 GRID 
	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	DrawLine(10, 10, 10, 470, 5, colors[BLUE]);    	// LINE 1 FROM BOTTOM LEFT TO UP
	DrawLine(10, 470, 470, 470, 5, colors[BLUE]);    // LINE 2 FROM LEFT TO RIGHT UPPER 
	DrawLine(10, 10, 470, 10, 5, colors[BLUE]);      // LINE 3 FROM LEFT TO RIGHT LOWER
	DrawLine(470, 10, 470, 470, 5, colors[BLUE]);	// LINE 4 FROM Bottom right TO UP
	// GRID 1 
	// 9 Vertical Lines
	
	// GRID 2 
	// 9 Vertical Lines
	int spacer = 10;
	for (int i = 0; i < 9; i++)
	{
		spacer = spacer + 46;
		DrawLine(spacer, 10, spacer, 470, 3, colors[BLUE]);
	}

	// squares within the grids 
	int box_spacer_h = 12;

	// Battleship 1 L=4
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 3 && i < 7)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(150 - 45, 12 + 23, 150, 12 + 46, 150, 12, colors[DARK_SEA_GREEN]);
			DrawRoundRect(150, 12, 135, 46, colors[DARK_SEA_GREEN], 1);
			x_store[0] = 105;
			y_store[0] = 12;
		}
		else
		{
			DrawSquare(box_spacer_h, 12, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// Battleship 1 L=3
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 7 && i < 10)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(335 - 45, 58 + 23, 335, 58 + 46, 335, 58, colors[DARK_SEA_GREEN]);
			DrawRoundRect(335, 58, 90, 46, colors[DARK_SEA_GREEN], 1);
			x_store[1] = 290;
			y_store[1] = 58;
		}
		else
		{
			DrawSquare(box_spacer_h, 58, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// Battleship 1 L=2
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 1 && i < 3)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(58 - 45, 104 + 23, 58, 104 + 46, 58, 104, colors[DARK_SEA_GREEN]);
			DrawRoundRect(58, 104, 45, 46, colors[DARK_SEA_GREEN], 1);
			x_store[3] = 12;
			y_store[3] = 104;
		}
		else
		{
			DrawSquare(box_spacer_h, 104, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// BS 1 L=1
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 8 && i < 9)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(380 - 45, 150 + 23, 380, 150 + 46, 380, 150, colors[DARK_SEA_GREEN]);
			x_store[6] = 335;
			y_store[6] = 150;
		}
		else
		{
			DrawSquare(box_spacer_h, 150, 45, colors[BLACK]);
		}
		box_spacer_h += 46;
	}

	// Battleship 2 L=3
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 4 && i < 7)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(196 - 45, 196 + 23, 196, 196 + 46, 196, 196, colors[DARK_SEA_GREEN]);
			DrawRoundRect(196, 196, 90, 46, colors[DARK_SEA_GREEN], 1);
			x_store[2] = 150;
			y_store[2] = 196;
		}
		else
		{
			DrawSquare(box_spacer_h, 196, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// BS 2 L=1
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 7 && i < 8)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(334 - 45, 242 + 23, 334, 242 + 46, 334, 242, colors[DARK_SEA_GREEN]);
			x_store[7] = 290;
			y_store[7] = 242;
		}
		else
		{
			DrawSquare(box_spacer_h, 242, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// BS 2 L=2 
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 1 && i < 3)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(58 - 45, 288 + 23, 58, 288 + 46, 58, 288, colors[DARK_SEA_GREEN]);
			DrawRoundRect(58, 288, 45, 46, colors[DARK_SEA_GREEN], 1);
			x_store[4] = 12;
			y_store[4] = 288;
		}
		else
		{
			DrawSquare(box_spacer_h, 288, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// BS 3 L=1
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 9 && i < 10)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(426 - 45, 334 + 23, 426, 334 + 46, 426, 334, colors[DARK_SEA_GREEN]);
			x_store[8] = 380;
			y_store[8] = 334;
		}
		else
		{
			DrawSquare(box_spacer_h, 334, 45, colors[BLACK]);
		}
		box_spacer_h += 46;
	}

	// BS 4 L=1 
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 6 && i < 7)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(288 - 45, 380 + 23, 288, 380 + 46, 288, 380, colors[DARK_SEA_GREEN]);
			x_store[10] = 230;
			y_store[10] = 380;
		}
		else
		{
			DrawSquare(box_spacer_h, 380, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// BS 3 L=2
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 1 && i < 3)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(58 - 45, 426 + 23, 58, 426 + 46, 58, 426, colors[DARK_SEA_GREEN]);
			DrawRoundRect(58, 426, 45, 46, colors[DARK_SEA_GREEN], 1);
			x_store[5] = 12;
			y_store[5] = 426;
		}
		else
		{
			DrawSquare(box_spacer_h, 426, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// 9 Horizontal Lines
	spacer = 10;
	for (int i = 0; i < 9; i++)
	{
		spacer = spacer + 46;
		DrawLine(10, spacer, 470, spacer, 3, colors[BLUE]);
	}

	int dd = 12;
	for (int i = 0; i < 10; i++)
	{
		dd += 46;
		grid_x[i] = grid_x[i] + dd;
		grid_y[i] = grid_y[i] + dd;
	}
	DrawString(5, 650, "Score = 0", colors[RED]); //-----------------------------------------------------
	DrawString(5, 625, "Balance = 500", colors[RED]);
	DrawString(5, 600, "Timer", colors[RED]); // --------------------------------------------------------
	
	// BS  L1 
	if ((game_x1 > 700 && game_x1 < 744) && (game_y1 > 230 && game_y1 < 273))
	{
		DrawSquare(703, 425, 45, colors[RED]);
		DrawString(705, 425, "X", colors[BLACK]);
		DrawSquare(748, 425, 45, colors[WHITE]);
		DrawSquare(703, 380, 45, colors[WHITE]);
		score += 60;
	}
	else
	{
		gap += 1;
		if (gap == 2)
		{
			gap = 0;
			score -= 20;
		}
	}
	if ((game_x2 > 793 && game_x2 < 837) && (game_y2 < 318 && game_y2 > 276))
	{
		DrawSquare(793, 380, 45, colors[RED]);
		DrawString(798, 380, "X", colors[BLACK]);
		DrawSquare(838, 425, 45, colors[WHITE]);
		DrawSquare(748, 380, 45, colors[WHITE]);
		DrawSquare(793, 335, 45, colors[WHITE]);
		score += 60;

	}
	else
	{
		gap += 1;
		if (gap == 2)
		{
			gap = 0;
			score -= 20;
		}
	}

	if ((game_x3 > 836 && game_x3 < 880) && (game_y3 > 323 && game_y3 < 363))
	{
		DrawSquare(793, 335, 45, colors[WHITE]);
		DrawSquare(883, 335, 45, colors[WHITE]);
		DrawSquare(838, 245, 45, colors[WHITE]);

		DrawSquare(838, 335, 45, colors[RED]);
		DrawString(843, 335, "X", colors[BLACK]);
		
		score += 60;
	}
	else
	{
		gap += 1;
		if (gap == 2)
		{
			gap = 0;
			score -= 20;
		}
	}
	if ((game_x4 > 887 && game_x4 < 926) && (game_y4 > 369 && game_y4 < 410))
	{
		DrawSquare(838, 245, 45, colors[WHITE]);
		DrawSquare(928, 245, 45, colors[WHITE]);
		DrawSquare(838, 200 ,45, colors[WHITE]);

		DrawSquare(883, 245, 45, colors[RED]);
		DrawString(888, 247, "X", colors[BLACK]);
		
		score += 60;
	}
	else
	{
		gap += 1;
		if (gap == 2)
		{
			gap = 0;
			score -= 20;
		}
	}

	// BS L2 
	/*if ((game_x5 > 840 && game_x5 < 925) && (game_y5 > 645 && game_y5 < 684))
	{

	}
	if ((game_x6 > 1024 && game_x6 < 1150) && (game_y6 > 645 && game_y6 < 684))
	{

	}
	if ((game_x7 > 748 && game_x7 < 835) && (game_y7 > 599 && game_y7 < 640))
	{

	}

	// BS L3
	if ((game_x8 > 841 && game_x8 < 970) && (game_y8 > 232 && game_y8 < 270))
	{

	}
	if ((game_x9 > 700 && game_x9 < 835) && (game_y9 > 460 && game_y9 < 500))
	{

	}

	// BS L4

	if ((game_x10 > 930 && game_x10 < 1150) && (game_y10 > 415 && game_y10 < 454))
	{

	}*/
	
	glutSwapBuffers(); // do not modify this line..
}

// ---------------------------------------------------------------------------When Auto Button is clicked this function is called!
void autoDisplay()
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	DrawLine(10, 10, 10, 470, 5, colors[BLUE]);    	// LINE 1 FROM BOTTOM LEFT TO UP
	DrawLine(10, 470, 470, 470, 5, colors[BLUE]);    // LINE 2 FROM LEFT TO RIGHT UPPER 
	DrawLine(10, 10, 470, 10, 5, colors[BLUE]);      // LINE 3 FROM LEFT TO RIGHT LOWER
	DrawLine(470, 10, 470, 470, 5, colors[BLUE]);	// LINE 4 FROM Bottom right TO UP


	// GRID
	// 9 Vertical Lines
	int spacer = 10;
	for (int i = 0; i < 9; i++)
	{
		spacer = spacer + 46;
		DrawLine(spacer, 10, spacer, 470, 3, colors[BLUE]);
	}

	// squares within the grids 
	int box_spacer_h = 12;

	// Battleship 1 L=4
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 3 && i<7)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle( 150 - 45, 12 + 23, 150, 12 + 46, 150, 12, colors[DARK_SEA_GREEN]);
			DrawRoundRect(150, 12, 135, 46, colors[DARK_SEA_GREEN], 1);
			x_store[0] = 105;
			y_store[0] = 12;
		}
		else
		{
			DrawSquare(box_spacer_h, 12, 45, colors[BLACK]);
		}
		
		box_spacer_h += 46;
	}

	// Battleship 1 L=3
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 7 && i < 10)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(335 - 45, 58 + 23, 335, 58 + 46, 335, 58, colors[DARK_SEA_GREEN]);
			DrawRoundRect(335, 58, 90, 46, colors[DARK_SEA_GREEN], 1);
			x_store[1] = 290;
			y_store[1] = 58;
		}
		else
		{
			DrawSquare(box_spacer_h, 58, 45, colors[BLACK]);
		}

		box_spacer_h += 46;
	}

	// Battleship 1 L=2
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 1 && i < 3)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle( 58-45, 104 + 23, 58, 104 + 46, 58, 104, colors[DARK_SEA_GREEN]);
			DrawRoundRect(58, 104, 45, 46, colors[DARK_SEA_GREEN], 1);
			x_store[3] = 12;
			y_store[3] = 104;
		}
		else
		{
			DrawSquare(box_spacer_h, 104, 45, colors[BLACK]);
		}
		
		box_spacer_h += 46;
	}

	// BS 1 L=1
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 8 && i < 9)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(380 - 45, 150 + 23, 380, 150 + 46, 380, 150, colors[DARK_SEA_GREEN]);
			x_store[6] = 335;
			y_store[6] = 150;
		}
		else
		{
			DrawSquare(box_spacer_h, 150, 45, colors[BLACK]);
		}
		box_spacer_h += 46;
	}

	// Battleship 2 L=3
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 4 && i < 7)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(196 - 45, 196 + 23, 196, 196 + 46, 196, 196, colors[DARK_SEA_GREEN]);
			DrawRoundRect(196, 196, 90, 46, colors[DARK_SEA_GREEN], 1);
			x_store[2] = 150;
			y_store[2] = 196;
		}
		else
		{
			DrawSquare(box_spacer_h, 196, 45, colors[BLACK]);
		}
		
		box_spacer_h += 46;
	}

	// BS 2 L=1
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >=7  && i < 8)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(334 - 45, 242 + 23, 334, 242 + 46, 334, 242, colors[DARK_SEA_GREEN]);
			x_store[7] = 290;
			y_store[7] = 242;
		}
		else
		{
			DrawSquare(box_spacer_h, 242, 45, colors[BLACK]);
		}
		
		box_spacer_h += 46;
	}

	// BS 2 L=2 
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 1 && i < 3)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(58 - 45, 288 + 23, 58, 288 + 46, 58, 288, colors[DARK_SEA_GREEN]);
			DrawRoundRect(58, 288, 45, 46, colors[DARK_SEA_GREEN], 1);
			x_store[4] = 12;
			y_store[4] = 288;
		}
		else
		{
			DrawSquare(box_spacer_h, 288, 45, colors[BLACK]);
		}
		
		box_spacer_h += 46;
	}

	// BS 3 L=1
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 9 && i < 10)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(426 - 45, 334 + 23, 426, 334 + 46, 426, 334, colors[DARK_SEA_GREEN]);
			x_store[8] = 380;
			y_store[8] = 334;
		}
		else
		{
			DrawSquare(box_spacer_h, 334, 45, colors[BLACK]);
		}
		box_spacer_h += 46;
	}

	// BS 4 L=1 
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 6 && i < 7)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(288 - 45, 380 + 23, 288, 380 + 46, 288, 380, colors[DARK_SEA_GREEN]);
			x_store[10] = 230;
			y_store[10] = 380;
		}
		else
		{
			DrawSquare(box_spacer_h, 380, 45, colors[BLACK]);
		}
		
		box_spacer_h += 46;
	}

	// BS 3 L=2
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 1 && i < 3)
		{
			// x1 y1 pointer x2y2 are upper and x3y3 lower points!
			DrawTriangle(58 - 45, 426 + 23, 58, 426 + 46, 58, 426, colors[DARK_SEA_GREEN]);
			DrawRoundRect(58, 426, 45, 46, colors[DARK_SEA_GREEN], 1);
			x_store[5] = 12;
			y_store[5] = 426;
		}
		else
		{
			DrawSquare(box_spacer_h, 426, 45, colors[BLACK]);
		}
		
		box_spacer_h += 46;
	}

	// 9 Horizontal Lines
	spacer = 10;
	for (int i = 0; i < 9; i++)
	{
		spacer = spacer + 46;
		DrawLine(10, spacer, 470, spacer, 3, colors[BLUE]);
	}

	int dd = 12;
	for (int i = 0; i < 10; i++)
	{
		dd += 46;
		grid_x[i] = grid_x[i] + dd;
		grid_y[i] = grid_y[i] + dd;
	}

	int next_button = nextButton();
	if (next_button == 10)
	{
		glutDisplayFunc(gameStartDisplay2);
	}


	glutSwapBuffers(); // do not modify this line..
}

// -------------------------------------------GAME START AFTER Manuallay Placing Battleships DISPLAY
void gameStartDisplay1()
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	DrawLine(700, 10, 700, 470, 5, colors[BLUE]);    	// LINE 1 FROM BOTTOM LEFT TO UP
	DrawLine(700, 470, 1160, 470, 5, colors[BLUE]);    // LINE 2 FROM LEFT TO RIGHT UPPER 
	DrawLine(700, 10, 1160, 10, 5, colors[BLUE]);      // LINE 3 FROM LEFT TO RIGHT LOWER
	DrawLine(1160, 10, 1160, 470, 5, colors[BLUE]);	// LINE 4 FROM Bottom right TO UP
	int spacer_1 = 10;
	// Horizontal lines
	for (int i = 0; i < 9; i++)
	{
		spacer_1 = spacer_1 + 46;
		DrawLine(700, spacer_1, 1160, spacer_1, 3, colors[BLUE]);
	}

	spacer_1 = 700;
	// Vertical Lines
	for (int i = 0; i < 9; i++)
	{
		spacer_1 = spacer_1 + 46;
		DrawLine(spacer_1, 10, spacer_1, 470, 3, colors[BLUE]);
	}

	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	DrawLine(10, 10, 10, 470, 5, colors[BLUE]);    	// LINE 1 FROM BOTTOM LEFT TO UP
	DrawLine(10, 470, 470, 470, 5, colors[BLUE]);    // LINE 2 FROM LEFT TO RIGHT UPPER 
	DrawLine(10, 10, 470, 10, 5, colors[BLUE]);      // LINE 3 FROM LEFT TO RIGHT LOWER
	DrawLine(470, 10, 470, 470, 5, colors[BLUE]);	// LINE 4 FROM Bottom right TO UP


	// GRID
	// 9 Vertical Lines
	int spacer = 10;
	for (int i = 0; i < 9; i++)
	{
		spacer = spacer + 46;
		DrawLine(spacer, 10, spacer, 470, 3, colors[BLUE]);
	}

	// sqares
	int box_spacer_h = 12;

	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 12, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 58, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 104, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 150, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 196, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 242, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 288, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 334, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 380, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 426, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	// 9 Horizontal Lines
	spacer = 10;
	for (int i = 0; i < 9; i++)
	{
		spacer = spacer + 46;
		DrawLine(10, spacer, 470, spacer, 3, colors[BLUE]);
	}

	battleship1_l4();

	//2 Battleships of lenght 3
	//int bs2 = battleship1_l3();
	//if (bs2 == 10)

	battleship1_l3();

	battleship2_l3();
	
	battleship1_l2();

	battleship2_l2();
	
	battleship3_l2();

	// 4 Battleships of lenght 1

	battleship1_l1();

	battleship2_l1();
	
	battleship3_l1();
	
	battleship4_l1();

	glutSwapBuffers(); // do not modify this line..
}

// -----------------------------------------------------------------------------------------------------------------GAME BEFORE START DISPLAY
void GameDisplay2()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	 //Update the colors

	//Green Square
	//DrawSquare( 250 , 250 ,20,colors[GREEN]); 
	
	//Display Score
	//DrawString( 50, 800, "Score=0", colors[BLACK]);
	
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[BLACK] ); 
	
	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	DrawLine( 10 , 10 , 10 , 470 , 5 , colors[BLUE] );    	// LINE 1 FROM BOTTOM LEFT TO UP
	DrawLine( 10 , 470 , 470 , 470 , 5 , colors[BLUE] );    // LINE 2 FROM LEFT TO RIGHT UPPER 
	DrawLine( 10 , 10 , 470 , 10 , 5 , colors[BLUE] );      // LINE 3 FROM LEFT TO RIGHT LOWER
	DrawLine( 470 , 10 , 470 , 470 , 5 , colors[BLUE] );	// LINE 4 FROM Bottom right TO UP
	
	
	// GRID
	// 9 Vertical Lines
	int spacer = 10;
	for (int i = 0; i < 9; i++)
	{
		spacer = spacer + 46;
		DrawLine(spacer, 10, spacer, 470, 3, colors[BLUE]);
	}
	
	// sqares
	int box_spacer_h = 12;

	for (int i=1 ; i<=10 ; i++)
	{
		DrawSquare(box_spacer_h, 12 , 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 58 , 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 104 , 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 150, 45, colors[BLACK]);
		box_spacer_h += 46;
	}
	
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 196, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 242, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 288 , 45, colors[BLACK]);
		box_spacer_h += 46;
	}
	
	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 334, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 380, 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	box_spacer_h = 12;
	for (int i = 1; i <= 10; i++)
	{
		DrawSquare(box_spacer_h, 426 , 45, colors[BLACK]);
		box_spacer_h += 46;
	}

	// 9 Horizontal Lines
	spacer = 10;
	for (int i=0 ; i<9 ; i++)
	{
	     spacer = spacer + 46;
	     DrawLine( 10 , spacer , 470 , spacer , 3 , colors[BLUE] );
	} 

	//1 Battleships of lenght 4
	//int bs1 = battleship1_l4();
	//if (bs1 == 10 )
	
		glPushMatrix();
		battleship1_l4();
		glPopMatrix();
	
	//2 Battleships of lenght 3
	//int bs2 = battleship1_l3();
	//if (bs2 == 10)
	
		glPushMatrix();
		battleship1_l3();
		glPopMatrix();
	
		glPushMatrix();	
		battleship2_l3();
		glPopMatrix();
	
		glPushMatrix();
		battleship1_l2();
		glPopMatrix();
	
		glPushMatrix();
		battleship2_l2();
		glPopMatrix();
	
		glPushMatrix();
		battleship3_l2();
		glPopMatrix();

	// 4 Battleships of lenght 1
		glPushMatrix();
		battleship1_l1();
		glPopMatrix();
	
		glPushMatrix();
		battleship2_l1();
		glPopMatrix();
	
		glPushMatrix();
		battleship3_l1();
		glPopMatrix();

		glPushMatrix();		
		battleship4_l1();
		glPopMatrix();
		
		int dd = 12;
		for (int i = 0; i < 10; i++)
		{
			dd += 46;
			grid_x[i] = grid_x[i] + dd;
			grid_y[i] = grid_y[i] + dd;
		}
		
		int auto_bt = autoButton();
		if (auto_bt == 10)
		{
			glutDisplayFunc(autoDisplay);
		}

		int next_button = nextButton();
		if (next_button == 10)
		{
			glutDisplayFunc(gameStartDisplay1);
		}

	//DrawCircle(50,670,10,colors[BLACK]);
	//DrawCircle(70,670,10,colors[RED]);
	//DrawCircle(90,670,10,colors[RED]);
	//DrawRoundRect(500,200,50,100,colors[BLACK],70);
	//DrawRoundRect(100,200,100,50,colors[BLACK],20);	
	//DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	//DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	//DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);
	
	glutSwapBuffers(); // do not modify this line..

}


/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */





/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */

/*void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}*/

/*
 * our gateway main function
 * */
// View Leaderboard Option Displayer
void GameDisplay3()
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	int new_score = score;
	string new_name = name;

	string scored ;

	DrawString(350, 565, "Name", colors[WHITE]);
	DrawString(650, 565, "Score", colors[WHITE]);

	string name_array[10];
	string* p;
	p = name_array;
	
	
	for (int i = 0; i < 10; i++) 
	{
		if (new_score > score_array[i])
		{
			name_array[i] = new_name;
			score_array[i] = new_score;
		}
	}
	
	ofstream file ("Highscores.txt");

	for (int i = 0; i < 10; i++)
	{
		file << "Name\t\tScore\n" << name << "\t\t" << score;
	}
	
	int sc = score;
	int digits = 0;
	int for_sc = sc;
	while (for_sc>0)
	{
		for_sc = for_sc / 10;
		digits += 1;
	}

	int array_of_digits[6];
	for (int i = 0; i < 6; i++)
	{
		array_of_digits[i] = 0;
	}
	int sep_digits = score; // seperate
	int a = 10000, b = 1000, c = 100, d = 10;

	for (int i = 0; i < digits; i++)
	{
		if (digits == 5)
		{
			array_of_digits[i] = sep_digits / a;
			sep_digits = sep_digits % a;
			a = a / 10;
		}
		if (digits == 4)
		{
			array_of_digits[i] = sep_digits / b;
			sep_digits = sep_digits % b;
			b = b / 10;
		}
		if (digits == 3)
		{
			array_of_digits[i] = sep_digits / c;
			sep_digits = sep_digits % c;
			c = c / 10;
		}
		if (digits == 2)
		{
			array_of_digits[i] = sep_digits / d;
			sep_digits = sep_digits % d;
			d = d / 10;
		}
		if (digits == 1)
		{
			array_of_digits[i] = sep_digits;
		}
	}

	for (int i = 0; i < digits; i++)
	{
		if (array_of_digits[i] == 0)
		{
			scored = scored + "0";
		}
		if (array_of_digits[i] == 1)
		{
			scored = scored + "1";
		}
		if (array_of_digits[i] == 2)
		{
			scored = scored + "2";
		}
		if (array_of_digits[i] == 3)
		{
			scored = scored + "3";
		}
		if (array_of_digits[i] == 4)
		{
			scored = scored + "4";
		}
		if (array_of_digits[i] == 5)
		{
			scored = scored + "5";
		}
		if (array_of_digits[i] == 6)
		{
			scored = scored + "6";
		}
		if (array_of_digits[i] == 7)
		{
			scored = scored + "7";
		}
		if (array_of_digits[i] == 8)
		{
			scored = scored + "8";
		}
		if (array_of_digits[i] == 9)
		{
			scored = scored + "9";
		}
		if (array_of_digits[i] == 10)
		{
			scored = scored + "10";
		}
	}

	int distancer = 0;
	for (int i = 0; i < 10; i++)
	{

		DrawString(350, 400 - distancer, name_array[i], colors[WHITE]);
		DrawString(650, 400 - distancer, scored, colors[WHITE]);
		distancer += 40;
	}
	

	file.close();



	glutSwapBuffers(); // do not modify this line..

}

// VIEW BALANCE
void GameDisplay4()
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

	glClear(GL_COLOR_BUFFER_BIT); //Update the colors


	DrawRoundRect(680, 450, 300, 46, colors[BLACK], 10);
	DrawString(450, 600, "BALANCE", colors[WHITE]);
	DrawString(650, 600, "500", colors[WHITE]);

	glutSwapBuffers(); // do not modify this line..

}

// OPTIONS ADD IMAGES -----------------------------------------------------------------------------------------
void GameDisplay5()
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

	glClear(GL_COLOR_BUFFER_BIT); //Update the colors


	cimg_library::CImg<unsigned char> img1("mine.bmp");
	cimg_library::CImg<unsigned char> img2("ship.bmp");
	(img1 , img2).display();

	glutSwapBuffers(); // do not modify this line..

}

// Displays and Directs Menu !
void GameDisplay1()
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	int op1 = option1();
	int op2 = option2();
	int op3 = option3();
	int op4 = option4();

	
	if (op1 == 10) // Leaderboard
	{
		glutDisplayFunc(GameDisplay3);
	}

	if (op2 == 10) // Start game
	{
		
		//int submenu = submenu1();
		//if (submenu == 10)
		{
			glutDisplayFunc(GameDisplay2);
		}		
	}

	if (op3 == 10) // View balance
	{
		glutDisplayFunc(GameDisplay4);
	}

	if (op4 == 10) //View Options
	{
		glutDisplayFunc(GameDisplay5);

	}

	
	glutSwapBuffers(); // do not modify this line..

}


int main(int argc, char*argv[]) {

	int width = 1360, height = 700; // i have set my window size to be 1360 x 700

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(0, 0); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Battleship Game"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...
	
	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.
	
	//-------------------START MENUUUUU
	glutDisplayFunc(GameDisplay1); // tell library which function to call for drawing Canvas.
	
	//START NEW GAME 
	//glutDisplayFunc(GameDisplay2);
	
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse
	
	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* Battleship_CPP_ */
