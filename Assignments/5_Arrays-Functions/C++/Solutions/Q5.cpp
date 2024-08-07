/*
   Muhammad Waqas Shahid Khan
   22I - 2469
   BS SE-E
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<unistd.h>

using namespace std;

string runMouse (int maze[10][17])
{
	int pathOfMouse [100][2] ;
	for (int i=0 ; i<100 ; i++ )
	{
		for (int j=0 ; j<2 ; j++)
		{
			pathOfMouse [i][j] = 0 ;
		}
	}
	
	int n = 0 ;
	int turn = 0 ;
	int pr = 0 ; // row position of mouse
	int pc = 0 ; //column position of mouse
	
	while (turn != 1000)
	{
		srand (time(0)) ;
		n = rand() % (4 - 1 + 1) + 1 ;
		for (int i=0 ; i<10 ; i++)
		{
			for (int j=0 ; j<17 ; j++)
			{
				if (maze[i][j] == 8)
				{
					pr = i ;
					pc = j ; 
				}
			}
		}
		if (n==1) // UP
		{
			if (maze[pr -1][pc] != -1 && maze[pr -1][pc] != 45)
			{
				if (maze[pr -1][pc] == 9)
				{
					string a = "Cheese Found!!";
					return a ;	
				}
				else 
				{
					maze[pr][pc] = 0 ;
					maze[pr-1][pc] = 8 ;
				}
			}
		}
		if (n==2) // DOWN
		{
			if (maze[pr + 1][pc] != -1 && maze[pr +1][pc] != 45)
			{
				if (maze[pr + 1][pc] == 9)
				{
					string a = "Cheese Found!!";
					return a ;	
				}
				else 
				{
					maze[pr][pc] = 0 ;
					maze[pr+1][pc] = 8 ;
				}
			}
		}
		if (n==3) // RIGHT
		{
			if (maze[pr][pc + 1] != -1 && maze[pr][pc+1] != 45 )
			{
				if (maze[pr][pc+1] == 9)
				{
					string a = "Cheese Found!!";
					return a ;	
				}
				else 
				{
					maze[pr][pc] = 0 ;
					maze[pr][pc+1] = 8 ;
				}
			}
		}
		if (n==4)  //LEFT
		{
			if (maze[pr ][pc - 1] != -1 && maze[pr][pc-1] != 45)
			{
				if (maze[pr][pc-1] == 9)
				{
					string a = "Cheese Found!!";
					return a ;	
				}
				else 
				{
					maze[pr][pc] = 0 ;
					maze[pr][pc-1] = 8 ;
				}
			}
		}
		
		// NEW DISPLAY
		sleep(1);
		system ("cls");
		for (int i=0 ; i<10 ; i++)
	    {
		    for (int j=0 ; j<17 ; j++)
		    {
			    cout<<" ";
			    if (i==0 or i ==9 or j==0 or j==16)
			    {
				    cout<< "    " << maze [i][j] ;
			    }
			    else 
			    {
				    cout<< "     " << maze [i][j] ;
			    }
			    if (i==8 )
			    {
				    cout<<" ";
			    }
		    }
		    cout<< endl << endl ;
	    }
		turn++;
	}
	if (turn == 1000)
	{
		string msg = "Cheese Not Found!";
		return msg ;
	}
	
}

int main ()
{
	int maze [10][17] ;
	int mouse =  8 ;
	int cheese = 9 ;
	int wall = -1 ;
	int boundry = 45 ;
	
	for (int i=0 ; i<10 ; i++ )
	{
		for (int j=0 ; j<17 ; j++)
		{
			if (i==0 or i ==9 or j==0 or j==16 )
			{
				maze [i][j] = boundry ;
			}
			else 
			{
				maze[i][j] = 0 ;
			}	
		}
    } 
	
	maze [1][1] = mouse ;
	maze [8][15] = cheese ;
	
	for (int i=1 ; i<2 ; i++ )
	{
		for (int j=2 ; j<16 ; j=j+2)
		{
			maze [i][j] = 0 ;
		}
	}
	
	for (int i=3 ; i<9 ; i=i+3)
	{
		for (int j=1 ; j<2 ; j++)
		{
			maze [i][j] = wall ;
		}
	}
	
	for (int i=2 ; i<3 ; i++)
	{
		for (int j=3 ; j<16 ; j = j+3)
		{
			maze [i][j] = wall ;
		}
	}
	
	for (int i=3 ; i<4 ; i++)
	{
		for (int j=4 ; j<16 ; j = j+3)
		{
			maze [i][j] = wall ;
		}
	}
	
	for (int i=4 ; i<5 ; i++)
	{
		for (int j=2 ; j<16 ; j = j+2)
		{
			maze [i][j] = wall ;
		}
	}
	
	for (int i=5 ; i<6 ; i++)
	{
		for (int j=4 ; j<16 ; j = j+2)
		{
			maze [i][j] = wall ;
		}
	}
	
	for (int i=7 ; i<8 ; i++)
	{
		for (int j=3 ; j<16 ; j = j+2)
		{
			maze [i][j] = wall ;
		}
	}
	
	maze [7][1] = -1 ;
	maze [7][4] = -1 ;
	maze [7][6] = -1 ;
	maze [7][8] = -1 ;
		
	for (int i=0 ; i<10 ; i++)
	{
		for (int j=0 ; j<17 ; j++)
		{
			cout<<" ";
			if (i==0 or i ==9 or j==0 or j==16)
			{
				cout<< "    " << maze [i][j] ;
			}
			else 
			{
				cout<< "     " << maze [i][j] ;
			}
			if (i==8 )
			{
				cout<<" ";
			}
		}
		cout<< endl << endl ;
	}
	
	string message = runMouse (maze) ;
	
	cout<< endl << message << endl ;

	return 0;
}


