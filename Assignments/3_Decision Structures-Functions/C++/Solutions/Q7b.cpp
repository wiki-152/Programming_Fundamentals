/* Muhammad Waqas Shahid Khan
   22i - 2469                 */ 

// We have assumed 1GB = 1000MBs for Convinience! The logic is correct so it would work for 1GB = 1024MBS also!  
// In addition to the question MB's used by user has also been asked as Package B is for 5.5GB data and switch does notsupport float or double which leads to logial error!!
  
#include <iostream>

using namespace std;

string error (string err)
{
	err = "Invalid Input! Restart Program!";
	cout<<err;
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
	long int gbs , mbs , gbs1 , gbs2 ;
	char package ;
	
	cout<< "GB's Used : ";
	cin>> gbs ;
	gbs = gbs * 1000 ;            // ASSUME 1GB = 1000MBS
	validation (gbs , mbs);
	cout<< "MB's Used : ";
	cin>> mbs;
	validation (gbs , mbs);
	gbs = gbs + mbs ;
	gbs1 = gbs + mbs ;
	
	
	cout<<"Enter (a) for Package A : " << endl ;
	cout<<"Enter (b) for Package B : " << endl ;
	cout<<"Enter (c) for Package C : " << endl ;
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
		gbs1 = gbs1 - 5500 ;
		gbs1 = gbs1 / 100 ;
		gbs1 = gbs1 * 20 ;
		gbs1 = gbs1 + 250;
		gbs1 = gbs - gbs1 ;
		
		switch (gbs1)     // CHECK
	{
			case -10000 ... 0 :
			cout<<"Money saved if Package B was subscribed : Rs. 0" << endl;
			break;
			default :
				cout<<"Money saved if Package B was subscribed : Rs. " << gbs1 << endl;
			break;
	}
		
		
		gbs2 = gbs - 1000;
		switch (gbs2)
	{
		case -10000 ... 0 :
		cout<<"Money saved if Package C was subscribed : Rs. 0" << endl ;
		break;
		default : 
		cout<<"Money saved if Package C was subscribed : Rs. " << (gbs - 1000) << endl ;
		break;
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
		
		gbs1 = gbs1 - 2000 ;
		gbs1 = gbs1 / 100 ;
		gbs1 = gbs1 * 30 ;
		gbs1 = gbs1 + 100;
		gbs1 = gbs - gbs1 ;
		
		switch (gbs1)
	{
			case -10000 ... 0 :
				cout<<"Money saved if Package A was subscribed : Rs. 0" << endl;
			break;
			default :
				cout<<"Money saved if Package A was subscribed : Rs. " << gbs1 << endl;
			break;
	}
	
		gbs2 = gbs - 1000;
		switch (gbs2)
	{
		case -10000 ... 0 :
		cout<<"Money saved if Package C was subscribed : Rs. 0" << endl ;
		break;
		default : 
		cout<<"Money saved if Package C was subscribed : Rs. " << (gbs - 1000) << endl ;
		break;
	}
	    	
		
	break ;
		
		case 'C' :
		case 'c' :
			
		cout<< "Amount Due : Rs. 1000 " << endl ;	
		
		gbs1 = gbs ;
		
		switch (gbs1)
	{
		case 0 ... 2000 :
		cout<< "Money saved if Package A was subscribed : Rs. "	<< (1000 - 100) << endl ;
		break;
		default : 
		cout<< "Money saved if Package A was subscribed : Rs.0 " << endl ; 
		break;
	}
	
	    gbs2 = gbs ;
	    switch (gbs2)
	{
		case 0 ... 5500 :
		cout<< "Money saved if Package B was subscribed : Rs. "	<< (1000 - 250) << endl ;
		break;
		default :
		cout<< "Money saved if Package A was subscribed : Rs.0 " << endl ;
		break;
	}
		
		break ;
	}
	
	return 0;
}
