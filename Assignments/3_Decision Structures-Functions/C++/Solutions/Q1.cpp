/* Muhammad Waqas Shahid Khan
    22i - 2469               */
    
// After an invalid input the program stops ! (To avoid logical error)

#include <iostream>

using namespace std;

string error (string err)
{
	err = "Invalid Input! Restart Program! ";
	cout<< err ;
}

int validate (int day , int month , int year)
{
	if ((month == 1 || month ==  3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 0 || day > 31))
	{
		string err;
		error (err);
		return 0;
	}
    
    if ((month == 4 or month ==  6 or month == 9 or month == 11) && (day < 0 || day > 30))
    {
    	string err;
		error (err);
		return 0;
	}
    
    if ((month == 2) && (day < 0 || day > 28))
	{
		string err;
		error (err);
		return 0;
	}
}

int validate (int month)
{
	if ((month < 0) or (month > 12))
	{
		string err;
		error (err);
		return 0;
	}
}

int validate (int year , string err)
{
	if ((year < 0) or (year > 2022))
	{
		string err;
		error (err);
		return 0;
	}
}
int gettime1 (int time)
{
	cout<< "Enter start time for appointment 1 (0-23) : ";
	cin>> time;
	if (time < 0 || time > 23)
	{
		string err;
		error(err);
		return 0;
	}
	return time;
}

int gettime2 (int time)
{
	cout<< "Enter End time for appointment 1 (0-23) : ";
	cin>> time;
	if (time < 0 || time > 23)
	{
		string err;
		error(err);
		return 0;
	}
	return time;
}

int gettime3 (int time)
{
	cout<< "Enter start time for appointment 2 (0-23) : ";
	cin>> time;
	if (time < 0 || time > 23)
	{
		string err;
		error(err);
		return 0;
	}
	return time;
}

int gettime4 (int time)
{
	cout<< "Enter End time for appointment 2 (0-23) : ";
	cin>> time;
	if (time < 0 || time > 23)
	{
		string err;
		error(err);
		return 0;
	}
	return time;
}

int getdate1 (int day)
{
	cout<< "Enter Date of Day of 1st Appointment (DD) : " ;
	cin>> day ;
	
	int month , year ;
	validate (day , month , year) ;
	return day;
}

int getdate2 (int day)
{
	cout<< "Enter Date of Day of 2nd Appointment (DD) : " ;
	cin>> day ;
	int month , year ;
	validate (day , month , year) ;
	return day;
}

int getdate3 (int month)
{
	cout<< "Enter Month of 1st Appointment (MM) : " ;
	cin>> month ;
	validate (month);
	return month ;
}

int getdate4 (int month)
{
	cout<< "Enter Month of 2nd Appointment (MM) : " ;
	cin>> month ;
	validate (month);
	return month;
}

int getdate5 (int year)
{
	cout<<"Enter year of 1st Appointment (YY) : ";
	cin>> year ;
	string err;
	validate (year , err);
	return year;
}

int getdate6 (int year)
{
	cout<<"Enter year of 2nd Appointment (YY) : ";
	cin>> year ;
	string err;
	validate (year , err);
	return year;
}

void isoverlapping (string message , int y1 , int y2 , int m1, int m2 , int d1 , int d2 , int t1 , int t11)
{
	message = "Overlapping Appointments !";
	
	if ((y1 == y2) && (m1 == m2)) 
	{
		if (d1 == d1)
		{
		   if (t1 == t11)
		   {
			 cout<< message ;
		   }
		   else cout << "Not Overlapping Appointments !";
		}
	}
	
}

int main () 
{
	int time , day , month , year;
	int y1 = getdate5 (year); // Appointment 1
	int y2 = getdate6 (year); // Appointment 2
	int m1 = getdate3 (month); // Appointment 1
	int m2 = getdate4 (month); // Appointment 2
	int d1 = getdate1 (day); // Appointment 1
	int d2 = getdate2 (day); // Appointment 2
	int t1 = gettime1 (time);  // Start Time Appointment 1
	int t2 = gettime2 (time);  // End Time Appointment 1
	int t11 = gettime3 (time); // Start Time Appointment 2
	int t22 = gettime4 (time); // End Time Appointment 2

	string message;
	
	isoverlapping (message , y1 , y2 , m1, m2 , d1 , d2 , t1 , t11) ;
	
	return 0;
	
}
