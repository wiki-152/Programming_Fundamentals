/* Muhammad Waqas Shahid Khan
 Roll No : 22i-2469 */

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
float s = 0;
float u = 0;
float t = 0;
float a = 0;	
	
cout<< "Enter the initial velocity (u) : " ;
cin>> u;

cout<< "Enter the time (t) : " ;
cin>> t;

cout<< "Enter the accelearation (a) : " ;
cin>> a;	
	
s = ( u * t ) + ( 0.5 * a * pow ( t,2 )	) ;
	
cout<< "The distance (S) according to the second equation of motion is " << s ;	
	
	return 0;
}
