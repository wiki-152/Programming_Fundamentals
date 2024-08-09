#include <iostream>
#include <iomanip>
using namespace std;

int main () {

float ca ;
float cb ;
float cc ;
float cd ;

cout<< "How many tickets were sold for Class A : " ;
cin>> ca ;

cout<< "How many tickets were sold for Class B : " ;
cin>> cb ;

cout<< "How many tickets were sold for Class C : " ;
cin>> cc ;

cd = (ca*150 + cb*140 + cc*190) ;

cout<< "Income generated from ticket sales is : "  << cd << endl;

cout<< "The income upto 3 decimal places will be : " << fixed << setprecision(3) << cd << endl ;











return 0;
}
