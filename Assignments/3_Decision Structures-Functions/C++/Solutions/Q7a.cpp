/* Muhammad Waqas Shahid Khan
   22i - 2469                 */
    
// We have assumed 1GB = 1000MBs for Convinience! The logic is correct so it would work for 1GB = 1024MBS also!
// In addition to the question MB's used by user has also been asked as Package B is for 5.5GB data and switch does not support float or double which leads to logial error!!
  
#include <iostream>

using namespace std;

string error (string err)
{
	err = "Invalid Input! Restart Program!";
	cout<< err;
}

long int validation (long int gbs , long int mbs)
{
	if (gbs < 0)
	{
		string err;
		error (err);
		return 0;
	}
	if (mbs < 0)
	{
		string err;
		error (err);
		return 0;
	}
}

int main ()
{
	long int gbs , mbs ;
	char package ;
	
	cout<< "GB's Used : ";
	cin>> gbs ;
	gbs = gbs * 1000 ;            
	validation (gbs , mbs);
	
	cout<< "MB's Used : ";
	cin>> mbs;
	validation (gbs , mbs);
	gbs = gbs + mbs ;
	
	
	cout<<"Enter (a) for Package A  " << endl ;
	cout<<"Enter (b) for Package B  " << endl ;
	cout<<"Enter (c) for Package C  " << endl ;
	cout<<"Input Package : " ;
	cin>> package ;
	
	switch (package) {
		
		case 'A' :
		case 'a' :
		
		gbs = gbs - 2000 ; 
	    
		switch (gbs)
	{
			case -2000 ... 0 :
			cout << "Amound Due : Rs. 100" << endl ;
			break;
			
		default : 
		gbs = gbs / 100 ;
		gbs = gbs * 30 ;
		gbs = gbs + 100 ;
		cout<< "Amount Due : Rs. " << gbs << endl;
    }	
	    break ;
		
		case 'B' :
		case 'b' :
		
		gbs = gbs - 5500 ;
		switch (gbs)
	{
			case -5500 ... 0 :
			cout << "Amound Due : Rs. 250" << endl;
			break;
			
		default :
		gbs = gbs / 100 ;
		gbs = gbs * 20 ;
		gbs = gbs + 250 ;
		cout<< "Amount Due : " << gbs << endl ;	
	}
		break ;
		
		case 'C' :
		case 'c' :
			
		cout<< "Amount Due : Rs. 1000 " << endl ;	
		
		break ;
	}
	
	return 0;
}
