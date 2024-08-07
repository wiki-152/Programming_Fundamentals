/*
   Muhammad Waqas Shahid Khan
   22I - 2469
   BS SE-E
*/

#include<iostream>
#include<unistd.h>

using namespace std;

int main ()
{
	char grid[20][20] ; 
	string name1 , name2 ;
	
	cout<<"Welcome"	<< endl << endl;
	cout<<"Name of Player 1 : ";
	getline (cin , name1);
	cout<<"Name of Player 2 : ";
	getline (cin , name2);
	
	system("cls");

	for (int i=0 ; i<20 ; i++)
	{
		if (i<=10)
		{
			cout<< "   " << i ;
		}
		else
		{
			cout<< "  " << i ;
		}
	}
	
	cout<<endl;
	
	for (int i=0 ; i<20 ; i++)
	{
		if ( i<10 )                     
		{
			cout<< i << "  " ;
		}
		else
		{
			cout<< i << " " ;
		}
		
		for (int j=0 ; j<20 ; j++)
		{
			grid[i][j] = '.' ;
			cout<< grid[i][j] << "   " ;
		}
		
		cout<<endl;
	}
	
	// Phase 1 ---------------------------------------------------------
	
	int no_of_bs , length ;
	char direction;
	int row , column , row1 , column1 ;
	int row_store[400] , column_store [400] ;
	char direction_storer [400];
	
	for (int i=0 ; i<400 ; i++)
	{
		row_store[i] = 0 ;
		column_store[i] = 0 ;
	}
	
	for (int i=0 ; i<400 ; i++)
	{
		direction_storer[i] = 0 ;
	}
	
	cout<< endl << endl ;
	cout<< name1 << "! It's Your Turn !" << endl ; 
	cout<< "Enter Number of Battleships : " ;
	cin>> no_of_bs ;
	
	while (no_of_bs > 400)
	{
		cout<<"Number is too big for grid ! Enter Again : ";
		cin>> no_of_bs ;
	}
	
	cout<<"Enter Lenght of Battleship : ";
	cin>> length ;
		
	while ((length < 0) or (length > 19))
	{
		cout<<"Invalid Input! Enter Between 0 and 20 (excluding 20) : ";
		cin>> length ;
	}
	
	for (int i=0 ; i<no_of_bs ; i++)
	{	
		cout<< "Enter direction ( h for horizontal or v for vertical ) : " ;
		cin>> direction ;  
		
		while (direction != 'H' && direction != 'h' && direction != 'V' && direction != 'v')
		{
			cout<< "Invalid Input! Enter direction ( h for horizontal or v for vertical ) : ";
			cin>> direction;
		}
		
		direction_storer[i] = direction ;
		
		cout<<"Enter Placement Row Number : " ;
		cin>> row ;
		
		while ((row < 0) or (row > 19))
		{
			cout<<"Invalid Input! Enter Between 0 and 20 (excluding 20) : ";
			cin>> row ;
		}
	
		cout<<"Enter Placement Column Number : " ;
		cin>> column ;
		
		while ((column < 0) or (column > 19))
		{
			cout<<"Invalid Input! Enter Between 0 and 20 (excluding 20) : ";
			cin>> column ;
		} 
		
		while (true)
		{
			if (grid[row][column] == 'B')
			{
				cout<<"Battle Ship Already Exists ! Enter Values Again ! " << endl;
				cout << "Row : ";
				cin>>row;
				cout<<"Column : ";
				cin>>column;
			}
			else 
			{
				break;
			}
		}
		
		row_store[i] = row ;
		column_store[i] = column ;
		
		if (direction == 'H' or direction == 'h' )
		{
			column1 = column + length - 1 ;
		}
		else
		{
			column1 = column ;
		}
		
		if (direction == 'V' or direction == 'v' )
		{
			row1 = row + length - 1 ;
		}
		else 
		{
			row1 =  row ;
		}
		
		for (int j=row ; j<=row1 ; j++)
		{
			for (int k=column ; k<=column1 ; k++)
			{
				grid[j][k] = 'B';
			}
		}
		
		system ("cls");
		
		//  New DISPLAY AFTER nTH INPUT
		for (int i=0 ; i<20 ; i++)
	    {
		    if (i<=10)
		    {
			    cout<< "   " << i ;
		    }
		    else
		    {
			    cout<< "  " << i ;
		    }
	    }
	    
		cout<<endl;
	
	    for (int i=0 ; i<20 ; i++)
	    {
		    if ( i<10 )                     
		    {
			    cout<< i << "  " ;
		    }
		    else 
		    {
			    cout<< i << " " ;
		    }
		
		    for (int j=0 ; j<20 ; j++)
		    {
			    cout<< grid[i][j] << "   " ;
		    }
		    cout<<endl;
	    }		
	} 
	
	sleep(3); 
	
	// ------------------------------------ PHASE 2 -----------------------------------------
	
	int row_ , column_ , score = 0 ;
	
	system ("cls");
	
	cout<< "BATTLE ROUND BEGINS ! " << endl;
	
	char new_grid [20][20] ;
	
	for (int i=0 ; i<20 ; i++)
	{
		if (i<=10)
		{
			cout<< "   " << i ;
		}
		else
		{
			cout<< "  " << i ;
		}
	}
	
	cout<<endl;
	
	for (int i=0 ; i<20 ; i++)
	{
		if ( i<10 )                     
		{
			cout<< i << "  " ;
		}
		else
		{
			cout<< i << " " ;
		}
		
		for (int j=0 ; j<20 ; j++)
		{
			new_grid[i][j] = 48 ;
			cout<< new_grid[i][j] << "   " ;
		}
		cout<<endl;
	}
	
	for (int i=1 ; i<(no_of_bs+5) ; i++)
	{
		cout<< "Round " << i <<" !" << endl ;
		
		cout<< "Enter Your Missile Row Number : ";
		cin>> row_ ;
		
		cout<< "Enter Your Missile Column Number : ";
		cin>> column_ ;
		
		if (grid[row_][column_] == 'B' && new_grid[row_][column_] != 'H')
		{	
		    score = score + 10 ;
		    for (int i=0 ; i<=no_of_bs ; i++)
		    {
		    	if (length == 1)
		    	{
		    		if (grid[row_][column_] == 'B')
		    		{
		    			new_grid [row_][column_] = 'H' ;
					}
				}
		    	
		    	if ((direction_storer[i] == 'h' or direction_storer[i] == 'H') && grid[row_][column_-1] == 'B' && length != 1 ) 
			    {
			    	for (int k=length ; k>0 ; k--)
			        {
			        	if (grid[row_][column_ - k ] == 'B' && new_grid[row_][column_ - k] != 'H' )
			        	{
			        		column_ = column_ - 1 ;
						}
					}
				    for (int j=0 ; j<length ; j++)
			        {
				        new_grid[row_][column_ + j] = 'H';
			        }
					break;  
			    }
			    if (((direction_storer[i] == 'v' or direction_storer[i] == 'V') && grid[row_-1][column_] == 'B' && length != 1 ))
			    {
			    	for (int k=length ; k>0 ; k--)
			        {
			        	if (grid[row_ - k][column_] == 'B' && new_grid[row_ - k][column_] != 'H')
			        	{
			        		row_ = row_ - 1 ;
						}
					}
					
				    for (int j=0 ; j<length ; j++)
			        {
				        new_grid[row_ + j][column_] = 'H';
			        }  
			        break;
			    }
			}
			cout<<"Battle Ship Has Been Hit !! "<< endl;
		}
		else 
		{
			cout<<"No Battle Ship Hit !! "<< endl;
		}
		
		sleep (3) ;
		
		system ("cls");
		
		// DISPLAY NEW GRID 
		for (int i=0 ; i<20 ; i++)
	    {
		    if (i<=10)
		    {
			    cout<< "   " << i ;
		    }
		    else
		    {
			    cout<< "  " << i ;
		    }
	    }
	
	    cout<<endl;
	
	    for (int i=0 ; i<20 ; i++)
	    {
		    if ( i<10 )                     
		    {
			    cout<< i << "  " ;
		    } 
		    else
		    {
			    cout<< i << " " ;
		    }
		
		    for (int j=0 ; j<20 ; j++)
		    {
			    cout<< new_grid[i][j] << "   " ;
		    }
		    cout<<endl;
	    }
	}
	
	// -------------------------------------GAME ENDS-------------------------------------------
	
	sleep (3);
	
	system ("cls") ;
	
	cout<< "Game Has Ended ! " << endl << endl ;
	cout<< name2 << " Score : " << score << " out of "<< (no_of_bs * 10) << "! " << endl << endl ;
	
	for (int i=0 ; i<20 ; i++)
	{
		if (i<=10)
		{
			cout<< "   " << i ;
		}
		else
		{
			cout<< "  " << i ;
		}
	}
	
	cout<<endl;
	
	for (int i=0 ; i<20 ; i++)
	{
		if ( i<10 )                     
		{
			cout<< i << "  " ;
		}
		else
		{
			cout<< i << " " ;
		}
		
		for (int j=0 ; j<20 ; j++)
		{
			if (grid[i][j] = 'B' && new_grid[i][j] != 'H' && grid[i][j] != '.')
			{
				new_grid[i][j] = 'B';
			} 
			cout<< new_grid[i][j] << "   " ;
		}
		cout<<endl;
	}
	
	return 0;
}


