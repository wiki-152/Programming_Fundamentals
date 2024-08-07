/* Muhammad  Waqas Shahid Khan
    22i - 2469                */

// After Invalid Input Program Stops To avoid logical error!
   
#include <iostream>

using namespace std;

string error (string err)
{
	err = "Invalid Input! Restart Program! " ;
	cout << err ;
	return err ;
}

bool validate (int input)
{
	if (input < 0  or input > 3999)
	{
		string err ;
		error (err) ;
		return false;
	}
	else return true;
}

int main ()
{
	int input;
	cout<< "Enter Number in Decimal Number System (0-3999) : " ;
	cin>> input ;
	
	if (validate (input) == false)
	{
		return 0;
	}
	
	int a,b,c,d,e;
	
	a = input % 10 ;
	
	b = input - a ;
	b = b % 50 ;
	
	cout<<b;
	
	c = input - a - b ;
	c = c % 100 ;
	
	d = input - a - b - c ;
	d = d % 1000 ;
	
	e = input - a - b - c - d ;           
	
	cout<< "The number in Roman Numerals will be : " ;
	
	if ( e == 1000)
	{
		cout<<"M";
	} 
	
	if ( e == 2000)
	{
		cout<<"MM";
	}
	
	if ( e == 3000)
	{
		cout<<"MMM";
	}
	
	if (d == 100)
	{
		cout<<"C";
	}
	
	if (d == 200)
	{
		cout<<"CC";
	}
	
	if (d == 300)
	{
		cout<<"CCC";
	}
	
	if (d == 400)
	{
		cout<<"CD";
	}
	
	if (d == 500)
	{
		cout<<"D";
	}
	
	if (d == 600)
	{
		cout<<"DC";
	}
	
	if (d == 700)
	{
		cout<<"DCC";
	}
	
	if (d == 800)
	{
		cout<<"DCCC";
	}
	
	if (d == 900)
	{
		cout<<"CM";
	}
	
	if (c == 50)           
	{
		cout<<"L";
	}
	
	if (b == 10)
	{
		cout<<"X";
	}
	
	if (b == 20)
	{
		cout<<"XX";
	}
	
	if (b == 30)
	{
		cout<<"XXX";
	}
	
	if (b == 40)
	{
		cout<<"XL";
	}
	
	if (a == 1)
	{
		cout<<"I";
	}
	
	if (a == 2)
	{
		cout<<"II";
	}
	
	if (a == 3)
	{
		cout<<"III";
	}
	
	if (a == 4)
	{
		cout<<"IV";
	}
	
	if (a == 5)
	{
		cout<<"V";
	}
	
	if (a == 6)
	{
		cout<<"VI";
	}
	
	if (a == 7)
	{
		cout<<"VII";
	}
	
	if (a == 8)
	{
		cout<<"VIII";
	}
	
	if (a == 9)
	{
		cout<<"IX";
	}
	
	return 0;
}

