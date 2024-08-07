/* Muhammad Waqas Shahid Khan
 Roll No : 22i-2469 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
	
	float x = 0;
	float pi = 3.1415926535897932384626433832795 ;
	float sinx = 0;
	float cosx = 0;
	
	cout<< "Enter a number in degrees : " ;
	cin>> x;
	if ( x==0 or x==360) {
		
		cout<<"The value of sin(x) is : 0 " << endl ;
		cout<<"The value of cos(x) is : 1 " << endl ;
		return 0;
	}
	if ( x==90 ) {
		
		cout<<"The value of sin(x) is : 1 " << endl ;
		cout<<"The value of cos(x) is : 0 " << endl ;
		return 0;
	}
	if ( x==180) {
		
		cout<<"The value of sin(x) is : 0 " << endl ;
		cout<<"The value of cos(x) is : -1 " << endl ;
		return 0;
	}
	if ( x==270) {
		
		cout<<"The value of sin(x) is : -1 " << endl ;
		cout<<"The value of cos(x) is : 0 " << endl ;
		return 0;
	}
	
	x = x * pi / 180 ;
	
	sinx = x - ( pow(x,3) / (3*2*1) ) + ( pow(x,5) / (5*4*3*2*1)) - ( pow(x,7) / ( 7*6*5*4*3*2*1)) + ( pow(x,9) / (9*8*7*6*5*4*3*2*1)) ;
	
	cosx = 1 - ( pow(x,2) / (2*1) ) + ( pow(x,4) / (4*3*2*1) ) - ( pow(x,6) / (6*5*4*3*2*1) ) + ( pow(x,8) / (8*7*6*5*4*3*2*1)) ;
	
	cout<< "The value of sin(x) is : " << sinx << endl ;
	cout<< "The value of cos(x) is : " << cosx << endl ;
	
	return 0;
}
