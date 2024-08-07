/* 
    Muhammad Waqas Shahid Khan
    22I - 2469 
    BS SE-E
*/

// Input Validation 

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

unsigned long long int inputValidation (int input)
{
	cin>> input;
	while(input < 0)
	{
		system("color c");
		cout<< "Invalid Input! Pythagorean Triples Can Be Only For Positive Integers!" << endl ;
		cout<< "Enter range again : " ;
		cin>>input;
	}
	return input;
}

int main()
{
	unsigned long long int input;
	cout<< "Enter a range for all sides : " ;
	input = inputValidation (input);
	system("color f");
	
	cout<<"Side-a\t" << "Side-b\t" << "hypotenuse" << endl;
	cout<< ".............................." << endl;
	
	// d is for count of possibilities !
	int a=1 , b=1 , c=1 , d=0 ;                      
	for(int i=0 ; a<=input ; i++)
	{
		b = 1;
		for (int j=0 ; b<=input ; j++)
		{
			c = 1;
			for (int k=0 ; c<=input ; k++)
			{ 
				if (pow(a,2) + pow(b,2) - pow(c,2) == 0)
				{
					cout<< a << "\t" << b << "\t" << c << endl;
					d++ ;
				}
			    c++ ;
			}
			b++ ;
		}
		a++ ;
	}
	cout<< "A total of " << d << " Pythagorean triples were found in range " << input;
	
	return 0;
}
