/* Muhammad Waqas Shahid Khan
 Roll No : 22i-2469 */

#include <iostream>

using namespace std;

int main () {
	
	int num   = 0;
	int hours = 0;
	int mins  = 0;
	int secs  = 0;
	
	cout<< "Enter the total number of seconds (in integers) : " ;
	cin>> num ;
	
	hours = num / 3600;
	mins = ( ( num % 3600 ) - ( num % 60 ) ) / 60 ;
	secs = num % 60 ; 
	
	cout<< hours <<" hours " << mins << " mins " << secs << " seconds" << endl;	
	
	return 0;
}
