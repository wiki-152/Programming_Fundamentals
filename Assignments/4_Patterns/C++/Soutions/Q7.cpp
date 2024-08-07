/* 
    Muhammad Waqas Shahid Khan
    22I - 2469
	BS SE-E 
*/
    
	// Signs For Operations + , - , * , / , % work also !
    // Input Validation of 1st and 2nd Inputs and Operation Input !
   
#include <iostream>

using namespace std;

// --Input Validation For First and Second Inputs--
unsigned long long int inputValidation (int in)
{
	cin>> in;
	while (in < 0)
	{
		system("color c");
		cout<<"Invalid Input! Please Enter A Positive Number : ";
		cin>> in;
	}
	return in;
}

string inputValidation (string in_o)
{
	cin>> in_o ;
	while (in_o != "Addition" && in_o != "addition" && in_o != "Add" && in_o != "add" && in_o != "+" && in_o != "Subtraction" && in_o != "subtraction" && in_o != "Subtract" && in_o != "subtract" && in_o != "-" && in_o != "Multiplication" && in_o != "multiplication" && in_o != "Multiply" && in_o != "multiply" && in_o != "*" && in_o != "Division" && in_o != "division" && in_o != "Divide" && in_o != "divide" && in_o != "/" && in_o != "Remainder" && in_o != "remainder" && in_o != "Modulus" && in_o != "modulus" && in_o != "mod" && in_o != "Mod" && in_o != "%")
	{
		system("color c");
		cout<<"Invalid Input For Operator! Enter Again : " ;
		cin>> in_o ;
	}
	return in_o;
}

int main ()
{
	int in , operation ;
	unsigned long long count = 0 ;
	int i , j ;
	unsigned long long mul_ans = 0 ;
	string in_o ;
	
	cout<< "First Input : ";
	
	unsigned long long int n1 = inputValidation (in) ;
	system("color f");
	
	cout<< "Second Input : ";
	
	unsigned long long int n2 = inputValidation (in) ;
	system("color f");
	
	cout<< "Operation : ";
	string input = inputValidation (in_o);
	system("color f");
	
	if (input == "Addition" or input == "addition" or input == "Add" or input == "add" or input == "+")
	{
		operation = 1 ;
	}
	
	if (input == "Subtraction" or input == "subtraction" or input == "Subtract" or input == "subtract" or input == "-")
	{
		operation = 2 ;
	}
	if (input == "Multiplication" or input == "multiplication" or input == "Multiply" or input == "multiply" or input == "*")
	{
		operation = 3 ;
	}
	if (input == "Division" or input == "division" or input == "Divide" or input == "divide" or input == "/")
	{
		operation = 4 ;
	}
	
	if (input == "Remainder" or input == "remainder" or input == "Modulus" or input == "modulus" or input == "mod" or input == "Mod" or input == "%")
	{
		operation = 5 ;
	}
	
	switch (operation)
	{
		case 1 :
			
			for (i=0 ; i<n2 ; i++)
			{
				n1++ ;
			}
			cout<< "Answer: " << n1;
		break;
		
		case 2 :
			
			for (i=0 ; i<n2 ; i++)
			{
				n1-- ;
			}
			cout<< "Answer: " << n1;
		break;
		
		case 3 :
	        
			for (i=0 ; i<n1 ; i++)
	        {
		       for (j=0 ; j<n2 ; j++)
	           {
	    	      mul_ans++ ;
		       }
	        }
	        cout<< "Answer: "<< mul_ans;
		break ;
		
		case 4 :
			for (i=0 ; n1>=n2 ; i++)
			{
				for (j=0 ; j<n2 ; j++)
				{
					n1-- ;
				}
				count++ ;
			}
			cout<< "Answer: " << count;
		break;
		
		case 5 :
			for (i=0 ; n1>=n2 ; i++)
			{
				for (j=0 ; j<n2 ; j++)
				{
					n1-- ;
				}
			}
			cout<< "Answer: "<< n1;
	}
	
	return 0;
}
