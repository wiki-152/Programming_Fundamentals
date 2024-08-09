#include <iostream>

#include <fstream>

using namespace std;

int main ()
{

ifstream f1 ("/home/wiki/Desktop/Lab Task 14/File1.txt");
string f11 , f22 ; 
while ((getline (f1,f11)))
{
f22 = f22 + f11;
}

ifstream f2 ("/home/wiki/Desktop/Lab Task 14/File2.txt");

while ((getline (f2,f11)))
{
f22 = f22 + f11;
}

cout<<f22<<endl;


return 0;
}
