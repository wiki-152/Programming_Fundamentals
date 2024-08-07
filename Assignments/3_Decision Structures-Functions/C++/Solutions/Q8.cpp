/* Muhammad Waqas Shahid Khan
   22i-2469                  */
    
   // We Fix Today's Date 1-10-2022 Logic is correct so any date can be fixed !
   // Asssuming Postacal code can have max 4 digits for city A and 5 for city B and user can be from any other city also with different postal code
   // After Invalid Input Program stops
   
#include <iostream>

using namespace std;

string error (string err)
{
	err = "Invalid Input! Restart Program!";
	cout<< err;
}

string name (string input)
{
	cout<< "Enter your name : " ;
	cin>> input ;
	return input ;
}

// ------------FN 2-------------

bool date_of_birth (int year , int month , int day)
{
	cout<< "Enter your birth year : " ;
	cin>> year ;
	if (year < 0 or year > 2022)
	{
		string err;
		error (err);
		return 0;
	}
	
	cout<< "Enter your birth month : " ;
	cin>> month;
	if (month < 0 or month > 12 ) 
	{
		string err;
		error (err);
		return 0;
	}
	
	cout<< "Enter your birth day: " ;
	cin>> day ;
	if (day < 0) 
	{
		string err;
		error (err);
		return 0;
	}
	if ( month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12 )
	{
		if (day > 31)
		{
			string err;
			error (err);
			return 0;
		}
	}
	if (month == 4 or month == 6 or month == 9 or month == 11)
	{
		if (day > 30)
		{
			string err;
			error (err);
			return 0;
		}
	}
	if (month == 2)
	{
		if (day > 28)
		{
			string err;
			error (err);
			return 0;
		}
	}
	
	
	int fixed_y = 2022 ;
	int fixed_m = 10 ;
	int fixed_d = 1 ;
	
	int age_y = fixed_y - year ;
	int age_m = fixed_m - month ;
	int age_d = fixed_d - day ;

	if (age_m < 0) {
		age_m = age_m + 12 ;
		age_y = age_y - 1;
	}
	
	if ( ( age_m == 1 or age_m == 3 or age_m == 5 or age_m == 7 or age_m == 8 or age_m == 10 or age_m == 12 ) && age_d < 0) {
		age_d = age_d + 31;
		age_m = age_m - 1 ;
	}
	
	if ( age_d < 0) {
		if (age_m = 2) 
		{
		age_d = age_d + 28 ;
        }
	}
	
	if ( (age_m == 4 or age_m == 6 or age_m == 9 or age_m == 11) && age_d < 0) {
		age_d = age_d + 30 ;
	}
	
	if ( age_d <= 0 ) {
		age_d = age_d + 1;
	}
	
	if (age_y < 22)
	{
	  return true;
	}
	else return false;

}

//-------------FN 3 .............

int postal_code (string message ,int pc) 
{
	message = "Enter Postal Code : ";
	cout<< message ;
	cin>> pc;
	
	if (pc < 0)
	{
		string err ;
		error (err);
		return 0;
	}
	int pc1 = pc % 10000;
	if ((pc1 >= 4000) && (pc1 < 5000))
	{
		pc = pc % 100;
		if ((pc >= 30) && (pc < 40))
		{
			return 5;
		}
	}
	int pc2 = pc % 100000;
	if ((pc2 >= 50000) && (pc2 < 60000))
	{
		pc = pc % 1000;
		if (((pc >= 300) && (pc < 400)) or ((pc >= 500) && (pc < 600)))
		{
			return 10 ;
		}
	}
}

//--------------FN 4 -------------------

float income (float input1)
{
	cout<< "Enter Your Income : " ;
	cin>> input1 ;
	
	if (input1 < 0)
	{
		string err ;
		error (err);
		return 0;
	}
  return input1 ;  
}


int main () 
{
	cout<< "Welcome To Joyland!" << endl ;
	
	string input ;
	string name1 = name (input) ;
	
	
	int year , month , day ;
	bool dob = date_of_birth (year , month , day) ;
	
	if (dob == true)
	{
		cout<< "Congratulations " << name1 << " !" << endl ;
		cout<< "You are eligible for discount of 50% Max !"<< endl;
	}
	
	int pc = 0;
	string message ;
	int postalcode = postal_code (message , pc) ;
	if (postalcode == 5 or postalcode == 10)
	{
		cout<< "Congratulations " << name1 << " !" << endl ;
		cout<< "You are eligible for discount of 20% Max!"<< endl;
	}
	
	float input1 ;
	float inc = income (input1) ;
	if (inc < 10000)
	{
		cout<< "Congratulations " << name1 << " !" << endl ;
		cout<< "You are eligible for discount of 90% Max ! " ;
	}
	
	return 0;
}
