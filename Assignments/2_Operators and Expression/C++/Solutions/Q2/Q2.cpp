/* Muhammad Waqas Shahid Khan
 Roll No : 22i-2469 */


#include<iostream>
#include<cmath>

using namespace std;

int main () {
	float p = 0;
	float r = 0;
	float t = 0;
	float A = 0;
	
	cout<< "Enter the amount you want to deposit in account : " ;
	cin>> p;
	
	cout<< "Enter the annual interest rate in percentage : " ;
	cin>>r ;  
	r = r/100;
	
	cout<< "Enter the investment tenure (in years) : " ;
	cin>> t ;
	
	A = ( 1 + ( r/12 ) ) ;
	A = pow ( A , ( 12 * t ) ) ;
	A = p * A ;
	
	cout<< "The compounded interest will be : " << A ;
	
	return 0;
}
