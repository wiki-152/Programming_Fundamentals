/* Muhammad Waqas Shahid Khan
 Roll No : 22i-2469 */

#include<iostream>

using namespace std;

int main()
{
	
	float NUM1 = 0 ;
	float NUM2 = 0 ;
	
	cout<< "Enter two numbers (NUM1 space NUM2) " ;
	cin>> NUM1 >> NUM2 ;
	
	NUM1 = NUM1 + NUM2 ;
	NUM2 = NUM1 - NUM2 ;
	NUM1 = NUM1 - NUM2 ;
	
	cout<<"The numbers after swapping are " << NUM1 << " and " << NUM2;


	return 0;
}
