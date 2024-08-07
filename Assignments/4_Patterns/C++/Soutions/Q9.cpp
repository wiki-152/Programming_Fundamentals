/* 
    Muhammad Waqas Shahid Khan
    22I - 2469
	BS SE-E 
*/


#include <iostream>

using namespace std;

int validation (int in)
{
	cin>> in ;
	while (in<0)
	{
		system ("color c");
		cout<<"Invalid Input! Enter A Value 0 or above : ";
		cin>> in;
	}
	return in;
}

int main ()
{
	int a , b , c , d , e , in; 
	
	cout<< "Enter 5 Numbers: ";
	
	a = validation (in) ;
	system("color f");
	
	b = validation (in) ;
	system("color f");
		
	c = validation (in) ;
	system("color f");
	
	d = validation (in) ;
	system("color f");	
	
	e = validation (in) ;
	system("color f");
	
	system("cls");
	
	cout<<"1st Input : " << a << endl;
	cout<<"2nd Input : " << b << endl;
	cout<<"3rd Input : " << c << endl;
	cout<<"4th Input : " << d << endl;
	cout<<"5th Input : " << e << endl;
	
	cout<<endl<<endl;
	
	int maxNumber = 0 ;
	
	// To Find The Highest Value of Input !
	if (a == b && a == c && a == d && a == e)
	{
		maxNumber = a ;
	}
	if (a>b && a>c && a>d && a>e)
	{
		maxNumber = a ;
	}
	if (b>a && b>c && b>d && b>e)
	{
		maxNumber = b ;
	}
	if (c>a && c>b && c>d && c>e)
	{
		maxNumber = c ;
	}
	if (d>a && d>b && d>c && d>e)
	{
		maxNumber = d ;
	}
	if (e>a && e>b && e>c && e>d)
	{
		maxNumber = e ;
	}
	
	// We Store Maximum Number in a new variable as the value of new variable will change its value !
	int y = maxNumber ;
	for (int i=0 ; i<maxNumber ; i++)
	{
		if (y<10)
		{
			cout<<"0";
		}
		
		cout<< y ;
		
		if (a>=y)
		{
			cout<<" * ";
		}
		else cout<< "   ";
		
		if (b>=y)
		{
			cout<<" * ";
		}
		else cout<< "   ";
		
		if (c>=y)
		{
			cout<<" * ";
		}
		else cout<< "   ";
		
		if (d>=y)
		{
			cout<<" * ";
		}
		else cout<< "   ";
		
		if (e>=y)
		{
			cout<<" * ";
		}
		else cout<< "   ";
		
		y = y-1 ;
		cout<< endl;
	}
	
	cout<< "   " << "1 " << " 2 " << " 3 " << " 4 " << " 5 "<< endl;
	
	return 0 ;
}
