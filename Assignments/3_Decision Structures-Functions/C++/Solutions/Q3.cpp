/* Muhammad Waqas Shahid Khan
    22i - 2469                 */
   
#include <iostream>

using namespace std;

string error (string err)
{
	err = "Invalid Input! Restart Program! " ;
	cout<< err;
}

string validation1 (string input)
{
	cout<< "Convert from? " ;
	cin>> input;
	
	if (input != "fl.oz" && input != "gal" && input != "oz" && input != "lb" && input != "in" && input != "ft" && input != "mi")
	{
		string err ;
		error (err);
		return 0;
	}
    return input ;
}

string validation2 (string input , string from_unit)
{
	cout<< "Convert to? " ;
	cin>> input;
	
	if (input != "ml" && input != "l" && input != "g" && input != "kg" && input != "mm" && input != "cm" && input != "m" && input != "km")
	{
		string err ;
		error (err);
		return 0;
	}

	if ((from_unit == "fl.oz" || from_unit == "gal" or from_unit == "oz" ) and (input == "g" or input == "kg" or input == "mm" or input == "cm" or input == "m" or input == "km" ))
    {
    	while (input != "ml" && input != "l")
    	{
    		cout<< "Non-convertable! Enter again : ";
    		cin>> input;
		}
	}
	
	if ((from_unit == "lb" ) and (input == "ml" or input == "l" or input == "mm" or input == "cm" or input == "m" or input == "km" ))
    {
    	if (input != "g" && input != "kg")
    	{
    	string err ;
		error (err);
		return 0;
		}
	}
	
	if ((from_unit == "in" or from_unit == "ft" or from_unit == "mi" ) and (input == "ml" or input == "l" or input == "g" or input == "kg" ))
    {
    	if (input != "mm" && input != "cm" && input != "m" && input != "km")
    	{
    	string err ;
		error (err);
		return 0;
		}
	}
	return input;
}

double validation3 (double value)
{
	cout<< "Value? " ;
	cin>> value ;
	return value ;
}

double floz (double value , string from_unit , string to_unit)
{
	if (to_unit == "ml")
	{
		cout<< value << from_unit << " = " << (value*29.5735) << to_unit << endl ;
	}
	if (to_unit == "l")
	{
		cout<< value << from_unit << " = " << (value*0.0295735) << to_unit << endl ;
	}
}

double gal (double value , string from_unit , string to_unit)
{
	if (to_unit == "ml")
	{
		cout<< value << from_unit << " = " << (value*3785.41) << to_unit << endl ;
	}
	if (to_unit == "l")
	{
		cout<< value << from_unit << " = " << (value*3.78541) << to_unit << endl ;
	}
}

double oz (double value , string from_unit , string to_unit)
{
	if (to_unit == "ml")
	{
		cout<< value << from_unit << " = " << (value*29.5735) << to_unit << endl ;
	}
	if (to_unit == "l")
	{
		cout<< value << from_unit << " = " << (value*0.0295735) << to_unit << endl ;
	}
}

double lb (double value , string from_unit , string to_unit)
{
	if (to_unit == "g")
	{
		cout<< value << from_unit << " = " << (value*453.592) << to_unit << endl ;
	}
	if (to_unit == "kg")
	{
		cout<< value << from_unit << " = " << (value*0.453592) << to_unit << endl ;
	}
}

double in (double value , string from_unit , string to_unit)
{
	if (to_unit == "mm")
	{
		cout<< value << from_unit << " = " << (value*25.4) << to_unit << endl ;
	}
	if (to_unit == "cm")
	{
		cout<< value << from_unit << " = " << (value*2.54) << to_unit << endl ;
	}
	if (to_unit == "m")
	{
		cout<< value << from_unit << " = " << (value*0.0254) << to_unit << endl ;
	}
	if (to_unit == "km")
	{
		cout<< value << from_unit << " = " << (value*0.0000254) << to_unit << endl ;
	}
}

double ft (double value , string from_unit , string to_unit)
{
	if (to_unit == "mm")
	{
		cout<< value << from_unit << " = " << (value*304.8) << to_unit << endl ;
	}
	if (to_unit == "cm")
	{
		cout<< value << from_unit << " = " << (value*30.48) << to_unit << endl ;
	}
	if (to_unit == "m")
	{
		cout<< value << from_unit << " = " << (value*0.3048) << to_unit << endl ;
	}
	if (to_unit == "km")
	{
		cout<< value << from_unit << " = " << (value*0.0003048) << to_unit << endl ;
	}
}

double mi (double value , string from_unit , string to_unit)
{
	if (to_unit == "mm")
	{
		cout<< value << from_unit << " = " << (value*1609000) << to_unit << endl ;
	}
	if (to_unit == "cm")
	{
		cout<< value << from_unit << " = " << (value*160934) << to_unit << endl ;
	}
	if (to_unit == "m")
	{
		cout<< value << from_unit << " = " << (value*1609.34) << to_unit << endl ;
	}
	if (to_unit == "km")
	{
		cout<< value << from_unit << " = " << (value*1.60934) << to_unit << endl ;
	}
}

int main ()
{
	string from_unit , input , to_unit ;
	char a ;
	double value = 0;
	
	from_unit = validation1 (input) ;
	to_unit = validation2 (input , from_unit) ;
	value = validation3 (value) ;
	 
	double ans ;
	
	if (from_unit == "fl.oz" )
	{
		floz (value , from_unit , to_unit );
	}
	
	if (from_unit == "gal" )
	{
		gal (value , from_unit , to_unit );
	}
	
	if (from_unit == "oz" )
	{
		oz (value , from_unit , to_unit );
	}
	
	if (from_unit == "lb" )
	{
		lb (value , from_unit , to_unit );
	}
	
	if (from_unit == "in" )
	{
		in (value , from_unit , to_unit );
	}
	
	if (from_unit == "ft" )
	{
		ft (value , from_unit , to_unit );
	}
	
	if (from_unit == "mi" )
	{
		mi (value , from_unit , to_unit );
	}
	
	return 0;
}
