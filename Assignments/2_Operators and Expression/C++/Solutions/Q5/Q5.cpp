/* Muhammad Waqas Shahid Khan
 Roll No : 22i-2469 */

#include <iostream>

using namespace std;

int main () {
	
	int age_y = 0 ;
	float age_m = 0 ;
	float age_d = 0 ;
	int fixed_y = 2022; //Year fixed according to question to 2022 !
	float fixed_m = 10; //Month fixed to October=10 according to question!
	float fixed_d = 1; //Day fixed according to question to 1
	int birth_y = 0;
	float birth_m = 0;
	float birth_d = 0;
	
	cout<< "Enter your age years : "  ;
	cin>> age_y ; 
	
	cout<< "Enter your age months : " ;
	cin>> age_m ;
	
	cout<< "Enter your age days : " ;
	cin>> age_d ;
	
	birth_m = fixed_m - age_m ;
	
	birth_y = fixed_y - age_y ; 
	
	birth_d = fixed_d - age_d ;
	
	
	
	if ( age_m < 0 or age_m > 12 ) {
		cout<< "Enter a correct month !" << endl;
		if ( age_y < 0 ) {
		cout<< "Enter a correct year !" << endl;
	}
	    if ( age_d < 0) {
		cout<< "Enter a correct day" << endl ;
	}
		return 0;
	}
	
	if ( age_y < 0 ) {
		cout<< "Enter a correct year !" << endl;
			if ( age_m < 0 or age_m > 12 ) {
		cout<< "Enter a correct month !" << endl;
    }
            if ( age_d < 0) {
		cout<< "Enter a correct day" << endl ;
	}
		return 0;
	}
	
	if ( age_d < 0) {
		cout<< "Enter a correct day" << endl ;
		if ( age_y < 0 ) {
		cout<< "Enter a correct year !"<< endl;
	}
		if ( age_m < 0 or age_m > 12 ) {
		cout<< "Enter a correct month !" << endl;
    }
		return 0;
	}
	
	
	if ( birth_m < 0) {
		birth_m = birth_m + 12 ;
		birth_y = birth_y - 1;
	}
	
	if ( ( birth_m == 1 or birth_m == 3 or birth_m == 5 or birth_m == 7 or birth_m == 8 or birth_m == 10 or birth_m == 12 ) && birth_d < 0) {
		birth_d = birth_d + 31;
		birth_m = birth_m - 1 ;
	}
	
	if ( birth_d < 0) {
		if (birth_m = 2) {
		birth_d = birth_d + 28 ;
    }
	}
	
	if ( (birth_m == 4 or birth_m == 6 or birth_m == 9 or birth_m == 11) && birth_d < 0) {
		birth_d = birth_d + 30 ;
	}
	
	if ( birth_d <= 0 ) {
		birth_d = birth_d + 1;
	}
	cout<< "The date of birth is " << birth_d << "-" << birth_m << "-" << birth_y << endl;
	
	return 0;
}
