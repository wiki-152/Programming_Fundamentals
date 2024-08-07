/*
   Muhammad Waqas Shahid Khan
   22I - 2469
   BS SE-E
*/

// FIX ERROR CHECKING 1 FUNCTION AND 2 RETURN
// Return new_string in 1st function

#include<iostream>

using namespace std;

//  ERROR CHEKING FUNCTION
int error_checking (int start , int end , string text , string pattern , int& err_counter)
{
	int length_of_text = text.length() ;

	if (err_counter == 1)
	{
		int input = start ;
		while ((input < 0) or (input > length_of_text) )
	    {
		    cout<<"Invalid Input! Enter Start Point Between 0 and "<< length_of_text << " : ";
		    cin>> input ;
	    }
	    return input ;
	}
	
	if (err_counter == 2)
	{
		int input = end ;
		while ((input < 0 ) or (input > length_of_text) or (input < start))
	    {
		    cout<<"Invalid Input! Enter End Point Between 0 and "<< length_of_text << " and Greater or Equal to Start Point : ";
		    cin>>input;
	    }
	    return input ;
	}
	
	if (err_counter == 3)
	{
		int input = start ;
		while ((input < 0) or (input > length_of_text) )
	    {
		    cout<<"Invalid Input! Enter Start Point Between 0 and "<< length_of_text << " : ";
		    cin>> input ;
	    }
	    return input ;
	}
	
	if (err_counter == 4)
	{
		int length_of_pattern = pattern.length();
		int input = end ;
		while ((input < 0 ) or (input > length_of_text) or (input < start) )
	    {
		    cout<<"Invalid Input! Enter End Point Between 0 and "<< length_of_text << " and Greater or Equal to Start Point : ";
		    cin>>input;
	    }
	    while (input - start != length_of_pattern)
	    {
	    	// PATTERN SIZE + START = END POINT 
	    	cout<<"Invalid Input! End point Should Be Equal To Pattern Size (" << length_of_pattern << ") So That The Entire Pattern Can Be Replaced! \nEnter End Point Again : ";
	    	cin>>input;
		}
	    return input ;
	}
	

}


// ------------------------------------------------FUNCTION 1---------------------------------------------------------------
string substring (int start , int end , string text)
{
	string new_string ;
	
	for (int i=start ; i<=end ; i++)
	{
		new_string = new_string + text[i] ;
	}
	
	return new_string ;
}

// ------------------------------------------------FUNCTION 2--------------------------------------------------------------- 
// The Code below can also work for finding all starting positions by instead of returning value displaying all srarting points in function
// Remove backslashes for above condition in below code!
int find (string pattern , string text)
{
	int length_of_pattern = pattern.length() ;
	int length_of_text = text.length() ;
	
	int counter_ = 0 ; 
	
	for (int i=0 ; i<=length_of_text ; i++)
	{	
		for (int j=0 ; j<=length_of_pattern ; j++)
		{
			int a = 0 + j ; 
			int b = i ;
		
			if (pattern[a] == text[b])
			{
			    for (int k=0 ; k<length_of_pattern ; k++)
			    {
			    	if (pattern[a+k] == text[b+k])
			    	{
			    		counter_++;
					}
					else 
					{
						counter_ = 0 ;
					}
				}
	    	}
	    	if (counter_ == length_of_pattern)
		    {
		    	//cout<< "Starting Point is : " << i << endl ; and add backslash to return startemnet!
		    	counter_ = 0;
		    	return i ;
		    }
		}
		if (counter_ == length_of_pattern)
		{
			break ;
		}
	}
}


// ------------------------------------------------FUNCTION 3---------------------------------------------------------------

string replace (string pattern , string text , int start , int end )
{
	
	string new_pattern ;
	
	int l_of_pattern = pattern.length();
	int l_of_text = text.length();
	
	if (start == 0)
	{
		for (int i=0 ; i<=end ; i++)
		{
			new_pattern = new_pattern + pattern [i] ;
		}
		if (end != l_of_text)
		{
			for (int j=end ; j<=l_of_text ; j++)
			{
				new_pattern = new_pattern + text [j] ;
			}
		}
	}
	else 
	{
		for (int i=0 ; i<start ; i++)
		{
			new_pattern = new_pattern + text [i] ;
		}
		
		int size = end - start ;
		for (int j=0 ; j<=size ; j++)
		{
			new_pattern = new_pattern + pattern [j] ;
		}
		
		if (end != l_of_text)
		{
			for (int k=end ; k<=l_of_text ; k++)
			{
				new_pattern = new_pattern + text [k] ;
			}
		}
	}
	return new_pattern ;
}

// ------------------------------------------------FUNCTION 4---------------------------------------------------------------

string invert (string text)
{
	string new_text ;
	int length_of_text = text.length();
	
	for (int i=length_of_text ; i>=0 ; i--)
	{
		new_text = new_text + text[i] ;
	}
	return new_text ;
}

int main ()
{
	string text , pattern ;
	int start , end ;
	
	int input ;
	cout<< "What Do You Want To DO ? " << endl;
	cout<< "Press 1 For Creating A Substring From A Text ! " << endl;
	cout<< "Press 2 For Finding A Pattern in Text ! " << endl ;
	cout<< "Press 3 For Replacing A Pattern in Text ! " << endl ;
	cout<< "Press 4 For Inverting A Text ! " << endl ;
	cout<< "Enter Your Option : " ;
	cin>> input ;
	
	while (input != 1 && input != 2 && input != 3 && input != 4)
	{
		cout<<"Invalid Input ! Enter A Number Between 1 and 4 : " ;
		cin>> input ;
	}
	
	system ("cls") ;
	
	int err_counter = 1 ;
	
	// ---------------------------------------------------FUNCTION 1 ----------------------------------------------------
	if (input == 1)
	{
		cout<< "Task : Creating A Substring From A Text ! " << endl << endl ;
		
		cout<< "Enter a sentence : " ;
		cin.ignore() ;
	    getline (cin , text) ;
	
	    cout<<"Enter Start Point : " ;
	    cin>> start ;
	    
	    start = error_checking (start , end , text , pattern , err_counter);
	    
	    err_counter = err_counter + 1 ;
	    
	    cout<<"Enter End Point : " ;
	    cin>> end;
	
	    end = error_checking (start , end , text , pattern , err_counter);
	
	    string new_string = substring (start , end , text) ;
	    
	    cout<< "The Extracted Substring is : " << new_string << endl ;
	}
	
	// ---------------------------------------------------FUNCTION 2 ----------------------------------------------------
	
	err_counter = 3 ;
	
	if (input == 2)
	{
		cout<< "Task : Finding A Pattern In A Text ! " << endl << endl ;
		
		cout<<"Enter Text : " ;
		cin.ignore();
		getline (cin , text) ;
		
		cout<< "Enter Text To Find : " ;
	    getline (cin , pattern); // USE CIN IGNORE IF ISSUE----------------------------------------------------------------------------------
	
	    int index = find (pattern , text) ;
	    
	    cout<< "The location of '" << pattern << "' is at : " << index ;
	}
	
	// ---------------------------------------------------FUNCTION 3 ----------------------------------------------------
	
	err_counter = 3 ;
	
	if (input == 3)
	{
		cout<< "Task : Replacing A Pattern In A Text ! \nRemember! Space will also be replaced! " << endl << endl;
		
		cout<<"Enter Text : " ;
		cin.ignore();
	    getline (cin , text) ;
	
	    cout<<"Enter Pattern Which Will Replace Text : " ;
	    getline (cin , pattern);
	    
	    int lt = text.length();
	    int lp = pattern.length();
	    
	    while (lp > lt)
	    {
	    	cout<< "Pattern is too large ! Enter Pattern Again : " ;
	    	getline (cin , pattern);
	    	lp = pattern.length(); 
		}
	    
	    cout<<"Enter Start Point : " ;
	    cin>>start;
	    
	    start = error_checking (start , end , text , pattern , err_counter) ;
	    
	    err_counter = err_counter + 1 ; 
	    
	    cout<<"Enter End Point : " ;
        cin>>end;
        
        end = error_checking (start , end , text , pattern , err_counter) ;
        
	    string new_pattern = replace (pattern , text , start , end) ;
	    
	    cout<< "The New Text is : " << new_pattern << endl ;
	}
	
	// ---------------------------------------------------FUNCTION 4 ----------------------------------------------------
	if (input == 4)
	{
		cout<< "Task : Inverting A Text ! " << endl ;
		
		cout<< "Enter Text : ";
		cin.ignore() ;
		getline (cin , text) ;
		
		string new_text = invert (text);
		
		cout<< endl << "The Inverted Text is : " << new_text ;
    }
	return 0 ;
}


