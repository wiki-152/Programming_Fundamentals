/* 
    Muhammad Waqas Shahid Khan
    22I - 2469
	BS SE-E  
*/

// Input Validation With Color Effect

#include <iostream>

using namespace std ;

int inputValidation (int in)
{
	cin>> in ;
	while (in < 0)
	{
		system ("color c");
		cout<<"Invalid Input! Number Cannot Be Negative! Enter Again : ";
		cin>> in;
	}
	while(in<=4)
	{
		system("color c");
		cout<<"Enter A Greater Number To Print Complete Circle! : ";
		cin>> in;
	}
	return in ;
}

int main()
{
	int in = 0 ;
	cout<< "Enter the number (n): ";
	int n = inputValidation (in) ;
	system ("color f");
	
	int rc = (n-3) / 2 ;      // rc = rows and columns which are same number
	int a = (n-3) / 2 ;       // Dots Made Seprate because its value changes throughout the program!!
	int b = 3 ;               // Stars Made Seprate because its value changes throughout the program!!
	
	// --------------------------------------------------If Condition For Odd Numbers--------------------------------------------------
	if(n % 2 != 0)
	{
		// For First Lines Before 3 Lines Of Complete Stars
		for (int i=1 ; i<=rc ; i++)
	    {
		    for (int j=1 ; j<=a ; j++)
		    {
			   cout<<".";
		    }
		    
			for (int k=1 ; k<=b ; k++)
		    {
			   cout<<"*";
		    }
		    
			for (int l=1 ; l<=a ; l++)
		    {
			   cout<<".";
		    }
		   
		   cout<< endl ;
		   a = a-1;
		   b = b+2;
	    }
	    
	    // For 3 Lines Of Complete Stars
	    for (int i=1 ; i<=3 ; i++)
	    {
		    for (int j=1 ; j<=n ; j++)
		    {
			   cout<<"*";
		    }
		    
			cout<< endl ;
	    }
	
	    a = 1 ;
	    b = n-2 ;
	    
	    // For Lines After 3 Lines Of Complete Stars
	    for (int i=1 ; i<=rc ; i++)
	    {
		   for (int j=1 ; j<=a ; j++)
		    {
			   cout<<".";
		    }
		   for (int k=1 ; k<=b ; k++)
		    {
			   cout<<"*";
		    }
		   for (int l=1 ; l<=a ; l++)
		    {
			   cout<<".";
		    }
		
		    a = a+1 ;
		    b = b-2 ;
		    cout<< endl ;
	    }
	}
	
	// --------------------------------------------------------If Condition For Even Numbers-------------------------------------------------------
	if (n % 2 == 0)
	{
		// For First Lines Before 3 Lines Of Complete Stars
		for (int i=1 ; i<=rc ; i++)
	    {
		    for (int j=1 ; j<=a ; j++)
		    {
			   cout<<".";
		    }
		    
			for (int k=0 ; k<=b ; k++)   // K has initial Value of 0 Which Helps In getting an extra star
		    {
			   cout<<"*";
		    }
		    
			for (int l=1 ; l<=a ; l++)
		    {
			   cout<<".";
		    }
		   
		   cout<< endl ;
		   a = a-1;
		   b = b+2;
	    }
	    
	    // For 3 Lines Of Complete Stars
	    for (int i=1 ; i<=3 ; i++)
	    {
		    for (int j=1 ; j<=n ; j++)
		    {
			   cout<<"*";
		    }
		    
			cout<< endl ;
	    }
	
	    a = 1 ;
	    b = n-2 ;
	    
	    // For Lines After 3 Lines Of Complete Stars
	    for (int i=1 ; i<=rc ; i++)
	    {
		   for (int j=1 ; j<=a ; j++)
		    {
			   cout<<".";
		    }
		   for (int k=1 ; k<=b ; k++)
		    {
			   cout<<"*";
		    }
		   for (int l=1 ; l<=a ; l++)
		    {
			   cout<<".";
		    }
		
		    a = a+1 ;
		    b = b-2 ;
		    cout<< endl ;
	    }
	}
	
	return 0;
}
