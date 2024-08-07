/*
   Muhammad Waqas Shahid Khan
   22I - 2469
   BS SE-E
*/

#include<iostream>
#include<unistd.h>

using namespace std;

int inputValidation()
{
	int input;
	cin>>input;
	while(input<0 or input>10)
	{
		cout<<"Invalid Input! Enter Value (0-10) : ";
		cin>>input;
	}
	return input;
}

bool verify_order (int columns1 , int rows2)
{
	if (columns1 == rows2)
	{
		return true ;
	}
	else 
	{
		return false ;
	}
}

int main ()
{
	int rows1 , columns1 , rows2 , columns2 ;
	bool compatibility;
	int i , j , k ;
	
	cout<<"Matrix #1 ! Enter Number of Rows : ";
	rows1 = inputValidation();
	
	cout<<"Matrix #1 ! Enter Number of Columns : ";
	columns1 = inputValidation();
	
	cout<<"Matrix #2 ! Enter Number of Rows : ";
	rows2 = inputValidation();
	
	cout<<"Matrix #2 ! Enter Number of Columns : ";
	columns2 = inputValidation();
	
	system("cls") ;
	
	cout<<"Matrix #1 : \n Number of Rows = " << rows1 << "\n Number of Columns = " << columns1 << endl;
	cout<<endl;
	cout<<"Matrix #2 : \n Number of Rows = " << rows2 << "\n Number of Columns = " << columns2 << endl;
	
	compatibility = verify_order (columns1 , rows2) ; 
	
	cout<<endl;
	
	while (compatibility == false)
	{
		cout<<"The Number of Columns of Matrix#1 and The Number of Rows of Matrix#2 are not equal! " << endl << endl;
		cout<<"Hence Multiplication is not possible!"<<endl<<endl;
		cout<<"Enter Values Again!!"<<endl;
		cout<<endl;
		
		sleep(7);
		system("cls");
		
		cout<<"Matrix #1 ! Enter Number of Rows : ";
    	rows1 = inputValidation();
	
	    cout<<"Matrix #1 ! Enter Number of Columns : ";
	    columns1 = inputValidation();
	
	    cout<<"Matrix #2 ! Enter Number of Rows : ";
	    rows2 = inputValidation();
	
	    cout<<"Matrix #2 ! Enter Number of Columns : ";
	    columns2 = inputValidation();
	
	    system("cls");
	
	    cout<<"Matrix #1 : \n Number of Rows = " << rows1 << "\n Number of Columns = " << columns1 << endl;
	    cout<<endl;
	    cout<<"Matrix #2 : \n Number of Rows = " << rows2 << "\n Number of Columns = " << columns2 << endl;
	
	    compatibility = verify_order (columns1 , rows2) ;
	}
	
	// MATRIX#1 VALUES INPUT FROM USER!!
	
	float matrix1 [10] [10] ;
	
	cout<< endl << "Enter Values of Elements one by one for Matrix#1 !" << endl ;
	for (i=0 ; i<rows1 ; i++)
	{
		for (j=0 ; j<columns1 ; j++)
		{
			cout<< "Enter Value For The Position of Row "<< (i+1) <<" and Column "<< (j+1)<< " : " ;
			cin>> matrix1 [i][j] ;
			
		}
	}
	
	// MATRIX#2 VALUES INPUT FROM USER!!
	
	float matrix2 [10] [10] ;
	
	cout<< endl <<"Enter Values of Elements one by one for Matrix#2 !" << endl ;
	for (i=0 ; i<rows2 ; i++)
	{
		for (j=0 ; j<columns2 ; j++)
		{
			cout<<"Enter Value For The Position of Row "<< (i+1) <<" and Column "<< (j+1) << " : " ;
			cin>>matrix2 [i][j];
		}
	}
	
	// RESULTANT MATRIX#3 WHICH HAS ROWS OF MATRIX#1 AND COLUMNS OF MATRIX#2 ACCORDING TO RULES OF MATRIX MULTIPLICATION!!
	
	float matrix3 [10][10] ;
	for (i=0 ; i<rows1 ; i++)
	{
		for (j=0 ; j<columns2 ; j++)
		{
			matrix3 [i][j] = 0 ;
		}
	}
	
	cout<<"The Resultant Matrix will be : "<< endl << endl;
	for (i=0 ; i<rows1 ; i++)
	{
		for (j=0 ; j<columns2 ; j++)
		{
			for (k=0 ; k<columns1 ; k++)
			{
			    if (i==0)
			    {
			    	int a = 0;
			    	matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k][j]) ;
				}
				if (i==1)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-1][j]) ; 
				}
				if (i==2)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-2][j]) ; 
				}
				if (i==3)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-3][j]) ; 
				}
				if (i==4)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-4][j]) ; 
				}
				if (i==5)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-5][j]) ; 
				}
				if (i==6)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-6][j]) ; 
				}
				if (i==7)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-7][j]) ; 
				}
				if (i==8)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-8][j]) ; 
				}
				if (i==9)
				{
					int a = 0 ;
					matrix3 [i][j] = matrix3 [i][j] + (matrix1 [i][a+k] * matrix2 [i+k-9][j]) ; 
				}
			}
		}
	}
	
	system("cls");
	
	cout<< " The Resultant Matrix is : " << endl << endl ;	
	for (i=0 ; i<rows1 ; i++)
	{
		for (j=0 ; j<columns2 ; j++)
		{
			if (j==0)
			{
				cout<< "|        ";
			}
			
			cout<< matrix3[i][j];
			
			if (matrix3[i][j] < 10000000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] < 1000000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] < 100000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] < 10000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] < 1000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] < 100000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] < 10000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] < 1000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] < 100)
			{
				cout<< "  ";
			}
			else 
			{
				cout<<"      ";
			}
			
			if (matrix3[i][j] < 10)
			{
				cout<<"    ";
			}
			
			if (matrix3[i][j] >= 10)
			{
				cout<<"    ";
			}
			
			if (matrix3[i][j] >= 100)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] >= 1000)
			{
				cout<< " ";
			}
			
			if (matrix3[i][j] >= 10000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] >= 100000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] >= 1000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] >= 10000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] >= 100000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] >= 1000000000)
			{
				cout<< "  ";
			}
			
			if (matrix3[i][j] >= 10000000000)
			{
				cout<< "  ";
			}
			
			if (j == (columns2 -1))
			{
				cout<<"  |"<<endl;
			}
		}
	}
	
	return 0;
}


