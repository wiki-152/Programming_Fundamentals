/*
   Muhammad Waqas Shahid Khan
   22I - 2469
   BS SE-E
*/

#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
	unsigned long long int n=0 , no_of_t;
	cout<< "Enter Number : ";
	cin>> n ;
	
	cout<<"Enter Number of Terms: ";
	cin>> no_of_t;
	
	unsigned long long int term = 0 ; 
	term = n ; // Extra Variable As Its value will change! 
	
	unsigned long long int a = 0;
	unsigned long long int b = 0; 
	unsigned long long int c = 0;
	unsigned long long int d = 0; // For Range
	unsigned long long int e = 0;
	unsigned long long int f = 0;
	int counter = 0 ;
	
	cout<< term << ",";
	
	for (int i=1 ; i<=no_of_t ; i++)
	{
		a = 0 , b = 0 , counter = 0 , d = 1 ,  e = 0 , f = term ;	
		
		while (term>0)
		{
			term = term / 10 ;
			counter++ ;
		}
		
		term = f ;
		
		for (int k=counter ; k>0 ; k--)
		{
			a = a + ((term % 10) * pow (10 , k-1)) ;
			term = term / 10;
		}
		
		term = a ;
		
		while (term > 0) 
		{ 
			while (term % 10 == d)
			{
				b++ ;
				term = term / 10 ;
			}
			
			if (b > 0) 
			{
				e = e + b ;
				e = e * 10 ;
				e = e + d ;
				e = e * 10 ;
		    }
		    
		    b = 0 ;
		    d++ ;
		    if (d>9)
		    {
			    d=1 ;
		    }
	    }
	    
	    term = e / 10;

		if (i==no_of_t)
		{
			cout<< term << ".";
		}
		else cout<< term << "," ;
    }

	return 0;
}


