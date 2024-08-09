#include <iostream>

using namespace std;

int main () {

float poc ;
float num1 ;
float num2 ;
float num3 ;
float num4 ;

cout<< "Enter the price of one chocolate mini bar : " ;
cin>> poc ;

cout<< "Enter number of chocolate mini bar sold in a day : " ;
cin>> num1 ;

num2 = num1*poc ;

cout<< "The total sales amount earned by shopkeeper will be : " << num2 << endl ;

num3 = 0.15*num2 ;
num4 = num2 - num3 ;

cout<< "The total sales of shopkeeper after tax deduction will be : " << num4 << endl ;









return 0;
}
