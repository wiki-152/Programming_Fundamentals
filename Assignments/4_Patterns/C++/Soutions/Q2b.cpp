/* 
    Muhammad Waqas Shahid Khan
    22I - 2469 
    BS SE-E
*/

// Input Validation with color effect ! 

#include <iostream>

using namespace std;

int validation (int in)
{
	cin>> in;
	while(in<=0)
	{
		system("color c");
		cout<<"Invalid Input! Enter A Value Greater than 0 to print pattern : ";
		cin>>in;
	}
	return in;
}

int main() 
{
    
	int input , in;
    cout << "Enter an integer : ";
    input = validation (in);
    system("color f");
    
    int a = input * 2 ;
    
	for (int i=1 ; i<a ; i++) 
	{
        if (i <= input) 
		{
            for (int j = 0; j < (i); j++) 
			{
				cout << "*";
			}
            
			for (int k = 0; k < input - i; k++) 
			{
                if (k%2) 
				{
                    if (i%2) 
                    {
                    	cout << ".";
					}
                    else cout << "_";
                } 
				else 
				{
                    if (i%2) 
                    {
                    	cout << "_";
					}
                    else cout << ".";
                }
            }
        }
        else 
		{
            for (int j = 0; j < (input - i % input); j++) 
            {
            	cout << "*";
			}
            for (int k = 0; k < i - input; k++) 
			{
                if (k%2) 
				{
                    if (i%2)
					{
						cout << "_";
					} 
                    else cout << ".";
                } 
				else 
				{
                    if (i%2) 
                    {
                    	cout << ".";
					}
                    else cout << "_";
                }
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
