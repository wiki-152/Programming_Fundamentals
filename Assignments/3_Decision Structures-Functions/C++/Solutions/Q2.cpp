/* Muhammad Waqas Shahid Khan
    22i - 2469                */
   
#include <iostream>

using namespace std;

string error (string err)
{
	err = "Invalid Input! Restart Program!";
	cout<< err ;
}

int validate (int input)
{
	if (input != 1 && input != 0)
	{
		string err;
		error (err);
		return 0;
	}
}

// Gear Shift Input will not be case sensitive!

char validate (char input1 , string err)
{
	if (input1 != '1' && input1 != '2' && input1 != '3' && input1 != 'P' && input1 != 'p' && input1 != 'N' && input1 != 'n' && input1 != 'D' && input1 != 'd' && input1 != 'R' && input1 != 'r')
	{
		error (err);
		return 0;
	}
}


int getswitchstatus1 (int input)
{
	cout<< "Status of Dashboard Switch Left Door : ";
	cin>> input;
	validate (input); 
	return input;
}

int getswitchstatus2 (int input)
{
	cout<< "Status of Dashboard Switch Right Door : ";
	cin>> input;
	validate (input);
	return input;
}

int getswitchstatus3 (int input)
{
	cout<< "Status of Dashboard Switch Child Lock : ";
	cin>> input;
	validate (input);
	return input;
}

int getswitchstatus4 (int input)
{
	cout<< "Status of Dashboard Switch Master Unlock : ";
	cin>> input;
	validate (input);
	return input;
}

int gethandle1 (int input)
{
	cout<< "Status of Outside Handle Left Door : ";
	cin>> input;
	validate (input);
	return input;
}

int gethandle2 (int input)
{
	cout<< "Status of Inside Handle Left Door : ";
	cin>> input;
	validate (input);
	return input;
}

int gethandle3 (int input)
{
	cout<< "Status of Outside Handle Right Door : ";
	cin>> input;
	validate (input);
	return input;
}

int gethandle4 (int input)
{
	cout<< "Status of Inside Handle Right Door : ";
	cin>> input;
	validate (input);
	return input;
}

char getgearshift (char input1)
{
	cout<< "Status of Gear : ";
	cin>> input1;
	string err ;
	validate (input1 , err);
	return input1;
}

int validate_status (int a1 , int a2 , int a3 , int a4 , int b1 , int b2 , int b3  , int b4 , int c) 
{
	switch (c)
	{
		case 'P':
		case 'p':
		switch (a1) 
	{
		case 1 :
			if (a4 == 1)
			{
				cout<< "Left Door Opens" << endl ;
			}
		break;
	}
	
	switch (a2) 
	{
		case 1 :
			if (a4 == 1)
			{
				cout<< "Right Door Opens" << endl ;
			}
		break;
	}
	
	switch (b1) 
	{
		case 1 :
			if (a4 == 1 )
			{
				cout<< "Left Door Opens" << endl ;
			}
		break;
	}
	
	switch (b2) 
	{
		case 1 :
			if (a4 == 1 && a3 == 0 && a1 == 0 )
			{
				cout<< "Left Door Opens" << endl ;
			}
		break;
	}
	
	switch (b3) 
	{
		case 1 :
			if (a4 == 1  && a2 == 0)
			{
				cout<< "Right Door Opens" << endl ;
			}
		break;
	}
	
	switch (b4) 
	{
		case 1 :
			if (a4 == 1 && a3 == 0 && a2 == 0 )
			{
				cout<< "Left Door Opens" << endl ;
			}
		break;
	}
	default : 
	cout<<"Both Doors Stay Closed!"<<endl;
	break;	
    }
		
}

int main ()
{
	int input;
    int a1 = getswitchstatus1 (input) ;	
    int a2 = getswitchstatus2 (input) ;
    int a3 = getswitchstatus3 (input) ;
    int a4 = getswitchstatus4 (input) ;
    
    int b1 = gethandle1 (input) ;
	int b2 = gethandle2 (input) ;
	int b3 = gethandle3 (input) ;
	int b4 = gethandle4 (input) ;
	
	char input1 ;
	int c = getgearshift (input1) ;
	
    validate_status (a1 , a2 , a3 ,  a4 , b1 , b2 ,  b3 , b4 , c) ;
	
	return 0;
}
