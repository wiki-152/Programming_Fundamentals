#include <iostream>

#include <fstream>

using namespace std;

int main ()
{

ifstream a ("File2.txt");
string a1 , coded ;
while ((getline (a , a1)))
{
 for (int i=0 ; i<a1.size() ;i++)
 {
    a1 = a1 + 100;
    coded = coded + a1[i];
 }
}

ofstream abc ("File4.txt");

abc << coded ;


return 0;
}
