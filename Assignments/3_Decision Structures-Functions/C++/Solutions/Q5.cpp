/* Muhammad Waqas Shahid Khan
    22i - 2469                */
 
#include <iostream>

using namespace std;

string error (string err)
{
	err = "Invalid Input! Restart Program!";
	cout<< err << endl;
}

// --------------Function No. 1---------------

float input_validation (float total_budget)
{
   cout<< "Enter Your Total Budget : Rs. " ;
   cin>> total_budget ;
    if (total_budget < 0 )
    {
   	    string err ;
   	    error (err);
    } 
    return total_budget;
} 

// ---------------Function No.2 ----------------

char input_validation (char tax_filer_status)
{
	cout<< "Are You A Tax Filer ? Enter (Y/N) : " ;
	cin>> tax_filer_status ;
	
	if (tax_filer_status != 89 && tax_filer_status != 78 && tax_filer_status != 121 && tax_filer_status != 110 )  
	{
		 string err ;
   	     error (err);
	}
	return tax_filer_status; 
}

// -------------Function No.3-------------------

float feautures (float price_car_type)
{
	int selection = 0;

	cout<< "1 For Manual or 2 For Automatic : ";
	cin>> selection ;
	
	if (selection != 1 && selection != 2)
	{
		string err;
		error (err);
		return 0;
	}
	
	if (selection == 1) 
	{
		price_car_type = 3769000;
		
	}
	
	if (selection == 2)
	{
		price_car_type = 3899000;
	}
	return price_car_type;
}

// -----------Function-4------------

float feautures_op_1 (float optional_features_1)
{
	char selection = 0 ;
	char s1 = 0 ;
	float price_IS = 0;
	
	cout<< "Do You Want Infotainment System ? Enter (Y/N) : " ;
	cin >> selection ;
	
		if (selection != 89 && selection != 78 && selection != 121 && selection != 110 ) 
	{
		 string err ;
   	     error (err);
	}
	
	if (selection == 121 or selection == 89 )
	{
		cout<< "With Navigation System ? Enter (Y/N) : " ;
		cin>> s1 ;
		
		if (s1 != 89 && s1 != 78 && s1 != 121 && s1 != 110 ) 
	    {
		     string err ;
   	         error (err);
	    }	
		
		if (s1 == 121 or s1 == 89) 
		{
			price_IS = 59500 ;
		} else price_IS = 8000;
	} 
	return price_IS ; 
}

// --------------Function 5 -----------------

float feautures_op_2 (float optional_features_2)
{
	char s1 = 0 ;
	int s2 = 0 ; 
	float price_FL = 0;
	
	cout<< "Do You Want Fog Lights ? Enter (Y/N) : " ;
	cin>> s1 ;
	if (s1 != 89 && s1 != 78 && s1 != 121 && s1 != 110 ) 
	{
		string err ;
   	    error (err);
	}
	    
	if (s1 == 89 or s1 == 121 ) 
	{
		cout<< "Enter 1 For Halogen or 2 For LED : " ;
		cin>> s2 ;
		
		if (s2 !=1 && s2 != 2)
		{
		string err ;
   	    error (err);
		}
		if (s2 == 1)
		{
			price_FL = 2000;
		} else price_FL = 5000;
	} 
	return price_FL ;
}

//------------Function 6-------------

float feautures_op_3 (float optional_features_3)
{
	char s1 = 0;
	int s2 = 0;
	float price_HI = 0;
	cout<< "Do you want a high grade interior ? Enter (Y/N) : " ;
	cin>> s1 ;
	if (s1 != 89 && s1 != 78 && s1 != 121 && s1 != 110 ) 
	    {
		string err ;
   	    error (err);
	    }
	if (s1 == 89 or s1 == 121)
	{
		cout<< "Enter 1 For Leather Seats or 2 For Sofa Seats : " ;
		cin>>s2;
		if (s2 == 1)
		{
			price_HI = 45000;
		} else price_HI = 25000;
	} 
	return price_HI;
}

//-----------------------Function 7 -------------------

float feautures_op_4 (float optional_features_4)
{
	char s1 = 0 ;
	float price_FM = 0;
	cout<< "Do You Want Floor Mats ? Enter (Y/N) :  " ;
	cin>>s1 ;
	if (s1 != 89 && s1 != 78 && s1 != 121 && s1 != 110 ) 
	    {
		string err ;
   	    error (err);
	    }
	if (s1 == 89 or s1 == 121)
	{
		price_FM = 60000;
	} 
	return price_FM ;
}

//-------------------Funtion 8--------------------------

float feautures_op_5 (float optional_features_5)
{
	char s1 = 0;
	float price_DV = 0 ;
	cout<< "Do You Want Door Visors ? Enter (Y/N) : " ;
	cin>> s1 ;
	while (s1 != 89 && s1 != 78 && s1 != 121 && s1 != 110 ) 
	    {
		cout<< "Invalid Input ! Please Enter Y For Yes or N For No : " ; // overloaded function create
		cin>> s1;
	    }
	if (s1 == 89 or s1 == 121)
	{
		price_DV = 60000;
	}
	return price_DV;
}

//----------------Function 9-----------------------------

float feautures_op_6 (float optional_features_6)
{
	char s1 = 0;
	float price_TT = 0 ;
	cout<< "Do You Want Trunk Tray ? Enter (Y/N) : " ;
	cin>> s1 ;
	if (s1 != 89 && s1 != 78 && s1 != 121 && s1 != 110 ) 
	    {
		string err ;
   	    error (err);
	    }
	if (s1 == 89 or s1 == 121)
	{
		price_TT = 8500;
	} 
	return price_TT;
}



int main () 
{

float  total_budget        = 0 ;      
char   tax_filer_status    = 0 ;      
float  price               = 0 ;      
float  optional_features_1 = 0 ;       
float  optional_features_2 = 0 ;       
float optional_features_3  = 0 ;      
float optional_features_4  = 0 ;      
float optional_features_5  = 0 ;    
float optional_features_6  = 0 ;      

unsigned long long total_final_price = 0;


// Add from here
unsigned long long budget         = input_validation (total_budget) ;          
char               tax_f_status   = input_validation (tax_filer_status) ;     
unsigned long long price_car_type = feautures (price_car_type) ;  
if (price_car_type == 0)
{
	return 0;
}             
unsigned long long price_of_1     = feautures_op_1 (optional_features_1) ;     
unsigned long long price_of_2     = feautures_op_2 (optional_features_2) ;     
unsigned long long price_of_3     = feautures_op_3 (optional_features_3) ;     
unsigned long long price_of_4     = feautures_op_4 (optional_features_4) ;     
unsigned long long price_of_5     = feautures_op_5 (optional_features_5) ;     
unsigned long long price_of_6     = feautures_op_6 (optional_features_6) ;      

total_final_price = price_car_type + price_of_1 + price_of_2 + price_of_3 + price_of_4 + price_of_5 + price_of_6 ;

((tax_f_status == 89) or (tax_f_status == 121))? (total_final_price = total_final_price + 25000 ) : (total_final_price = total_final_price + 75000 );

cout << "Total Price : Rs. " << total_final_price<< endl ;
cout<< "Budget : Rs. " << budget << endl ;
 
if (tax_f_status == true )
{
	cout<< "Status : Filer " << endl ;
} 
else cout<< "Status : Non - Filer " << endl ;

cout<< "Selected Feautures are listed below (If any) !" << endl;

(price_car_type == 3769000)? (cout<< "Car Type : Manual " << endl) : (cout<< "Car Type : Automatic " << endl);

if (price_of_1 != 0)
{
	(price_of_1 == 59500)? (cout<<"Infotainment System with Navigation System"<< endl) : (cout<<"Infotainment System without Navigation System"<< endl);
}

if (price_of_2 != 0)
{
	(price_of_2 == 2000)? (cout<<"Halogen Fog Lights"<< endl) : (cout<<"LED Fog Lights"<< endl);
}

if (price_of_3 != 0)
{
	(price_of_3 == 45000)? (cout<<"High Grade Interior with Leather Seats"<< endl) : (cout<<"High Grade Interior with Sofa Seats"<< endl);
}

if (price_of_4 != 0)
{
	cout<< "Floor Mats" << endl;
}

if (price_of_5 != 0)
{
	cout<< "Door Visors"<< endl;
}

if (price_of_6 != 0)
{
	cout<< "Trunk Trays"<< endl;
}

if (total_final_price > budget)
{
	cout<< "Sorry ! You don't afford it ! " << endl;
} 
else cout<< "You have a good taste , Go for it ! " << endl;

return 0 ;
}
