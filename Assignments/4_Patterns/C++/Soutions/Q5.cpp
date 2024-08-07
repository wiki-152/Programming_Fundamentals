/* 
    Muhammad Waqas Shahid Khan
    22I - 2469
    BS SE-E
*/

// Program works even if neegative number is entered for x!
   
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int x , n , y , maxNumber;
	
	cout<<  "Enter the number x: ";
	cin>> x ;
	
	cout<<  "Enter the number n: ";
	cin>> n ;
	
	cout<< endl;
	
	// --If Condition To Set Maximum Number So That We Know Highest Value of y / f(x) !--
	if (pow(x , n) - pow(x , (n-1)) > pow((-1*x) , n) - pow((-1*x) , (n-1)) )
	{
		maxNumber = pow(x , n) - pow(x , (n-1)) ;
	} 
	else maxNumber =  pow((-1*x),n) - pow((-1*x),(n-1)) ;
	
	// --For Will Run From Maximum Number To Zero In Descending Order Linewise !--
	for (int i=maxNumber ; i>=0 ; i--)
	{
		// --To Display 0 With 1 Digit Numbers On Y-Axis !--
		if (i<10)
		   {
			 cout<<"0";
		   }
		
		// --Number Will Be Displayed On Y-Axis !--  
		cout<< i ;
		
		// If Condition For Positive Input Of x ! For Y-Axis !
		if (x>=0)
		{
		   for (int j=(x*-1) ; j<=x ; j++)
		   {
		        if (pow(j,n) - pow(j,(n-1)) == i)
		        {
			      cout<< " * "; 
		        }
		        else cout<< "   ";
		   }
		}
		
		// If Condition For Negative Input Of x ! For Y-Axis !
		if(x<=0)
		{
			for(int j=x ; j<=(x*-1) ; j++)
		   {
		        if (pow(j,n) - pow(j,(n-1)) == i)
		        {
			        cout<< " * ";
		        }
		        else {cout<< "   ";}
		   }
		}
		cout<< endl ;
	}
	
	// To Display Numbers Along X-Axis For Positive Input of x !
	if (x>=0)
	{
		cout<< "  ";
		for(int i=(x*-1) ; i<=x ; i++)
		{
			if(i>=0)
			{
				cout<< " ";
			}
			cout<<i;
			cout<<" ";
		}
		
	}
	
	// To Display Numbers Along X-Axis For Negative Input of x !
	if (x<=0)
	{
		cout<< "  ";
		for(int i=x ; i<=(x*-1) ; i++)
		{
			if(i>=0)
			{
				cout<< " ";
			}
			cout<<i;
			cout<< " ";
		}
	}
	
	return 0;
}
