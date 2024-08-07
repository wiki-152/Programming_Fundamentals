/*
   Muhammad Waqas Shahid Khan
   22I - 2469
   BS SE-E
*/

#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() 
{
    int steps, height, width;
    
    cout << "Enter number of steps: ";
    cin >> steps;
    
	cout << "Enter height of step: ";
    cin >> height;
    
	cout << "Enter width of step: ";
    cin >> width;
	
    int a = 0 ;
	int character = 42;
	const int startCharacter = 42;
	int print = 0 ; // Character that will be printed!
	int counter = 1; // for if condition in main while 
	
	while(true)
	{
		for (int i = 1 ; i<=steps ; i++) 
	    {
		    print = (character + i - 1) ;
		    a = width * (steps + 1 - i) ;
		    
		    // Tp get spaces before complete line of characters! 
            for (int j=1 ; j<=a ; j++) 
		    {
			   cout << setw(1) << " " << setw(1);
		    }
		    
		    // Print character
		    for (int k = 1 ; k <= width ; k++) 
		    {
		    	// For used for getting topmost step back again as the first step instead of printing next ASCII code character! 
		        for (int l=1 ; l<=steps ; l++)
				{
					if (print - 41 - steps == l )
		        	{
		        		print= startCharacter + l - 1;
					}
				}
				
			    cout << char(print) ;
		    }
		    
		    // Tp print spaces between line of character and endpoint!
		    for (int j = 1; j <= width * (i - 1) - 1; j++)
		    {
			    cout << setw(1) << " " << setw(1);
		    }
            
            // To print character at end of line!
			if (i!=1) 
		    {
			    cout << char (print);
		    }
    
		    for (int l = 0; l < height + (height%2 + 1) % 2; l++) 
		    {
		    	// If to end line after printing line of character!
                if (!l % 2) 
                {
                	cout << endl;
				}
                else 
			    {
			    	// For Spaces Before Printing Characters For Height of step!
                    for (int j = 1; j <= width * (steps + 1 - i); j++) 
				    {
					    cout << setw(1) << " " << setw(1);
				    }
                    cout << (char) (print);
                    
                    // For spaces between height characters starting and ending !
                    for (int k = 1; k <= width * (i) - 2; k++) 
                    {
                	    cout << setw(1) << " " << setw(1);
				    }
                    cout << char (print) << endl;
                }
            }

            // ---------For Last line----------
            if (i == steps) 
		    {
                for (int h = 0; h < width * (steps + 1); h++) 
                {
            	    print = character + i - steps;
            	    cout << char (print) ;
			    }
            }
	    }
        
        sleep(1.5);
        system("cls");
        print = 0;
        
        // To Set Max Value of Character Using Number of steps so the order repeats! 
        if(counter<steps)
   	    {
   	    	counter = counter + 1;
   	    	character++ ;
		}else 
		{
			counter = 1;
			character = 42;
		}
	}
    
    return 0;
}
