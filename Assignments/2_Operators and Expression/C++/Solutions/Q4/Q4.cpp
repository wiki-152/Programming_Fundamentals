/* Muhammad Waqas Shahid Khan
 Roll No : 22i-2469 */

#include <iostream>

using namespace std;

int main () {
	
	float numhours = 0;
	float rate = 0;
	float grosspay = 0;	
	
	cout<< "Enter the number of hours : ";
	cin>> numhours ;
	
	cout<< "Enter the rate per hour : " ;
	cin>> rate ;
	
	
	grosspay = rate * 40 + 1.5 * rate * ( numhours - 40) ;
	
	cout << "The Gross Pay is : " << grosspay ;
	
	return 0;
}
