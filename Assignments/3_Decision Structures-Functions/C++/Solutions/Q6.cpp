/* Muhammad Waqas Shahid Khan
   22i - 2469                 */
   
#include <iostream>

using namespace std ;

string error (string err)
{
	err = "Invalid Input! Restart Program!";
	return err;
}

int num_1 (int input)
{
	cout<< "Enter 1st Number : ";
	cin>> input ;
	return input ;
}

int num_2 (int input)
{
	cout<< "Enter 2nd Number : ";
	cin>> input ;
	return input ;
}

int num_3 (int input)
{
	cout<< "Enter 3rd Number : ";
	cin>> input ;
	return input ;
}

int strictChecking (int num1 , int num2 , int num3)
{
	cout<< ((num1 < num2) && (num2 < num3)? "Increasing" : (((num1 > num2)&& (num2 > num3))?  "Decreasing" : "Neither Increasing Nor Decreasing" ));
}

int linientChecking (int num1 , int num2 , int num3)
{
    if (((num1 == num2) && (num2 < num3)) or ((num1 < num2) && (num2 == num3)) or ((num1 < num2) && (num2 < num3)))
		{
			   cout<< "Increasing";
        } 
        
		if (((num1 == num2) && (num2 > num3)) or ((num1 > num2) && (num2 == num3)) or ((num1 > num2) && (num2 > num3)))
		{
				cout<< "Decreasing";
		}
	    
	    if ((num1 == num2) && (num2 == num3))
	    {
	    	cout<< "Both Increasing and Decreasing";
		}
}

int main () 
{
	int num1 , num2 , num3 , input , checking ;
	string err;
	
	num1 = num_1 (input) ;
	num2 = num_2 (input) ;
	num3 = num_3 (input) ;
	
	cout<< "Enter 1 For Strict Checking or 2 For Linient Checking : ";
	cin>> checking ;
	
	if (checking != 1 && checking != 2)
	{
		cout<< error(err);
		return 0;
	}
	
	(checking == 1)? strictChecking (num1 , num2 , num3) : linientChecking (num1 , num2 , num3);
	
	return 0;
}
