/*
   Muhammad Waqas Shahid Khan
   22I - 2469
   BS SE-E
*/

#include<iostream>
#include<unistd.h>

using namespace std;

//----------------------------------------------------------------------FUNCTION 1 ------------------------------------------------------------
string look (char ch)
{
	// TO ASSIGN EACH CHARACTER A DECIMAL NUMBER FROM 0-26 (26th PLACE IS FOR SPACE)
	int no_of_character [27] ;
	int ascii_of_ch = int (ch) ;
	int binary_number = 0 ;
	
	for (int i=0 ; i<27 ; i++)
	{
		if (ascii_of_ch - 65 == i)
		{
			no_of_character [i] = i ;
	
			int nc = i ;                  // NC ========= NUMBER OF CHARACTER
			int n1 = 0 ;
			int n2 = 1 ;
			while (nc > 0)
			{
				n1 = nc % 2 ;
				nc = nc / 2 ;
				binary_number = binary_number + (n1 * n2);
				n2 = n2 * 10 ;
			} 
		}
		
		if (ascii_of_ch == 32)   // FOR SPACE ASCII ---------------------------------------------------
		{
			no_of_character[26] = 26 ;    
			   
			int nc = 26 ;                  // NC ========= NUMBER OF CHARACTER
			int n1 = 0 ;
			int n2 = 1 ;
			binary_number = 0 ;
			while (nc > 0)
			{
				n1 = nc % 2 ;
				nc = nc / 2 ;
				binary_number = binary_number + (n1 * n2);
				n2 = n2 * 10 ;
			}
		}
	}
	
	int for_digit = binary_number ;
	int digits = 0 ;
	while (for_digit > 0)                // TO DETERMINE TOTAL DIGITS OF BINARY NUMBER
	{
		for_digit = for_digit / 10 ;
		digits = digits + 1 ;
	}
	
	int array_of_digits[6] ;
	int sep_digits = binary_number; // seperate
	int a = 10000 , b = 1000 , c = 100 , d = 10 ;
	
	for (int i=0 ; i<digits ; i++)
	{
		if (digits == 5)
		{
			array_of_digits[i] = sep_digits / a ;
			sep_digits = sep_digits % a ;
			a = a / 10 ;
		}
		if (digits == 4)
		{
			array_of_digits[i] = sep_digits / b ;
			sep_digits = sep_digits % b ;
			b = b / 10 ;
		}
		if (digits == 3)
		{
			array_of_digits[i] = sep_digits / c ;
			sep_digits = sep_digits % c ;
			c = c / 10 ;
		}
		if (digits == 2)
		{
			array_of_digits[i] = sep_digits / d ;
			sep_digits = sep_digits % d ;
			d = d / 10 ;
		}
		if (digits == 1)
		{
			array_of_digits[i] = sep_digits ;
		}
	}
	
	if (binary_number == 0) // FOR  letter A 
	{
		digits = 1;
	}
	string e_m ; 
	int d_out_ch = 5 - digits ;         // TO DETERMINE NUMBER OF DIGITS OUT OF TOTAL 5 CHARACTERS SO THAT WE CAN PUT ZEROS  BEFORE BINARY DIGITS
	
	if (digits != 5)
	{
		for (int i=1 ; i<=d_out_ch ; i++)
		{
			e_m = e_m + "0" ;
	    }
	    for (int j=0 ; j<digits ; j++)
	    {
	    	if (array_of_digits[j] == 0 or binary_number == 0)
	    	{
	    		e_m = e_m + "0" ;
			}
			if (array_of_digits[j] == 1)
	    	{
	    		e_m = e_m + "1" ;
			}
		}	
	}
	else 
	{
		for (int j=0 ; j<digits ; j++)
	    {
	    	if (array_of_digits[j] == 0)
	    	{
	    		e_m = e_m + "0" ;
			}
			if (array_of_digits[j] == 1)
	    	{
	    		e_m = e_m + "1" ;
			}
		}
	}
	return e_m ;
}

//----------------------------------------------------------------------FUNCTION 2 ------------------------------------------------------------
char look (string code)
{	
	char decrypted ;
	
	int binary [27] ;
	for (int i=0 ; i<27 ; i++)
	{
		binary[i] = 0;
	}
	
	for (int i=0 ; i<27 ; i++)
	{	
		int nc = i ;                
		int n1 = 0 ;
		int n2 = 1 ;
		while (nc > 0)
		{
			n1 = nc % 2 ;
			nc = nc / 2 ;
			binary[i] = binary[i] + (n1 * n2);
			n2 = n2 * 10 ;
		}
	}	
	
	int a = 0 ;
	string part ;
	int binary_number = 0 ;
	
	for (int i=0 ; i<5 ; i++)
	{
	    part = part + code [i];
	}

	int turn = 0 ;
	for (int i=0 ; i<5 ; i++)
	{
		if (turn == 0)
		{
			if (part[i] == 48)
			{
				binary_number = binary_number + 0 ;
			}
			if (part[i] == 49)
			{
				    binary_number = binary_number + 10000 ;
			}
		}
			if (turn == 1)
			{
				if (part[i] == 48)
			    {
				    binary_number = binary_number + 0 ;
			    }
			    if (part[i] == 49)
			    {
				    binary_number = binary_number + 1000 ;
			    }
			}
			if (turn == 2)
			{
				if (part[i] == 48)
			    {
				    binary_number = binary_number + 0 ;
			    }
			    if (part[i] == 49)
			    {
				    binary_number = binary_number + 100 ;
			    }
			}
			if (turn == 3)
			{
				if (part[i] == 48)
			    {
				    binary_number = binary_number + 0 ;
			    }
			    if (part[i] == 49)
			    {
				    binary_number = binary_number + 10 ;
			    }
			}
			if (turn == 4)
			{
				if (part[i] == 48)
			    {
				    binary_number = binary_number + 0 ;
			    }
			    if (part[i] == 49)
			    {
				    binary_number = binary_number + 1 ;
			    }
			}
			turn = turn + 1 ;
		}

	char space = 32 ;
	char alpha = 65 ;
	for (int i=0 ; i<27 ; i++)
	{
		if (binary_number == binary[i])
		{
			if (65 + i == 91)
			{
				decrypted = decrypted + space ;
			}
			else 
			{
				alpha = alpha + i ;
				decrypted = decrypted + alpha ;
			}
		}
	}
	return decrypted ;
}

//----------------------------------------------------------------------FUNCTION 3 ------------------------------------------------------------
string cipher (string text)
{
	int length_of_text = text.length() ; 
	char ch = 0 ;
	string encrypted ;
	
	for (int i=0 ; i<length_of_text ; i++)
	{
		ch = text.at (i) ; 
		string received = look (ch) ;
		encrypted = encrypted + received ;		  
	}
	
	return encrypted ;
}

//----------------------------------------------------------------------FUNCTION 4 ------------------------------------------------------------

string de_cipher (string msg)
{
	int length_msg = msg.length();
	
	while (length_msg % 5 != 0)
	{
		cout<<"The Length of Encrypted Message is Invalid ! Enter Again : ";
		cin>> msg ;
		length_msg = msg.length();
	}
	
	string decoded ;
	
	int counter  = length_msg ;
	int a = 0 ;
	while (counter > 0)
	{
		string code ;
		for (int i=a ; i<(a+5) ; i++)
	    {
		    code =  code + msg [i];
	    }
	    decoded = decoded + look (code) ;
	    counter = counter - 5 ;
	    a = a + 5 ;
	}
	return decoded;
}

int main ()
{
	string text , msg ;
	char ch ;
	
	int input = 0 ;
	cout<<"1 For Encryption ! "<< endl ;
	cout <<"2 For Decryption !" <<endl;
	cout<< "Input : ";
	cin>> input ;
	
	while (input != 1 && input != 2)
	{
		cout<<"invalid Input! Enter 1 or 2 : ";
		cin>> input;
	}
	
	if (input == 1)
	{
		cout<<"Task : Encryption "<< endl ;
		
		cout<<"Enter Message All in Capital : " ;
		cin.ignore();
	    getline (cin , text);
	    
	    int a = 0;
	    while (a != 10)
	    {
	    	int l = text.length();
			for (int i=0 ; i< l ; i++)
			{
				if ((text.at(i) < 65 or text.at(i) > 90) && (text.at(i) != 32))
				{
					cout<<"You have entered small letters ! Please Restart and write capital letters!! "<< endl;
					return 0 ;
				}
				else 
				{
					a = 10 ;
				}
			} 
		}

	    string encrypted_message = cipher (text) ;
	
	    cout<< encrypted_message ;
	}
	
	if (input == 2)
	{
		cout<<"Task : Decryption "<< endl ;
		cout<<"Enter Encrypted Code (Do not give space! For Space Enter : 11010 ) : " ;
		cin.ignore();
	    getline (cin , msg);
	    
	    int a = 0;
	    while (a != 10)
	    {
	    	int l = msg.length();
			for (int i=0 ; i<l ; i++)
			{ 
				int m = msg.at(i); 
				
				if ( m != 48 && m != 49)
				{
					cout<<"Invalid Input ! Please Restart and write encrypted code again (Remeber! 11010 = space)!! "<< endl;
					return 0 ;
				}
				else 
				{
					a = 10 ;
				}
			}
		}
	    
	    string decrypted_message = de_cipher (msg) ;
	    
	    cout<< "The decrypted message is : " << decrypted_message ;
	}

	return 0;
}


