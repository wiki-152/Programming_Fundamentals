/* Muhammad Waqas Shahid Khan
 Roll No : 22i-2469 */

#include <iostream>

using namespace std;

int main () {
	
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;
int h = 0;
int i = 0;
int j = 0;
float median;
float mean;

cout<< "Enter first number   : " ;
cin>>a ;

cout<< "Enter second number  : " ;
cin>>b ;	
	
cout<< "Enter third number   : " ;
cin>>c ;	
	
cout<< "Enter fourth number  : " ;
cin>>d ;

cout<< "Enter fifth number   : " ;
cin>>e ;

cout<< "Enter sixth number   : " ;
cin>>f ;

cout<< "Enter seventh number : " ;
cin>>g ;

cout<< "Enter eight number   : " ;
cin>>h ;

cout<< "Enter ninth number   : " ;
cin>>i ;

cout<< "Enter tenth number   : " ;
cin>>j ;

median = ( e + f ) / 2 ;

cout<< endl << "The Median of the given total numbers will be : " << median << endl ;

mean = ( a + b + c + d + e + f + g + h + i + j ) / 10 ;

cout<< endl << "The Mean of the given 10 numbers will be : " << mean <<endl ;
	
	return 0 ;
}
