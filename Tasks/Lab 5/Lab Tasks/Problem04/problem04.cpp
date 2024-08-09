#include<iostream>
#include<iomanip>

using namespace std;

int main () {

float a = 0;
float b = 0;
float num1 ;
float num2 ;
float num3 ;
float num4 ;
float num5 ;

cout<< "Enter the value of first number (a) : " ;
cin>> a;

cout<< "Enter the value of second number (b) : " ;
cin>> b;

num1 = (a*a*a) ;
num2 = (3*a*a*b) ;
num3 = (3*a*b*b) ;
num4 = (b*b*b) ;
num5 = num1 + num2 + num3 + num4 ;

cout<< "Result for cube of two numbers using formula (a³+3a²b+3ab²+b³) is : " << num5 << endl ;

















return 0;
}
