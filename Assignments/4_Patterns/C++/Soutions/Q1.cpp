/* 
    Muhammad Waqas Shahid Khan
    22I - 2469 
	BS SE-E
*/
   
#include <iostream>
#include <windows.h> 
#include <unistd.h> 

using namespace std;

int main()
{
	int x=0 , y=0 , z=0 ;
	string input ;
	
	cout << x << " Hours : " << y << " Minutes : " << z << " Seconds" << endl;
	
	while(true)
	{
		for (int i=0 ; i<=60 ; i++)
    	{
		    z++ ;
		
		    if (z==10 or z==20 or z==30 or z==40 or z==50)
		    {
			   sleep (10);
			   system ("cls");
			   cout << x << " Hours : " << y << " Minutes : " << z << " Seconds" << endl;
		    }
		
		    if (z==60)
		    {
			   sleep(10);
			   y++ ;
			   z = 0;
			   system ("cls");
			   cout << x << " Hours : " << y << " Minutes : " << z << " Seconds" << endl;
		    }
		
		    if (y==60)
		    {
			   x++ ;
			   y = 0;
			   system ("cls");
			   cout << x << " Hours : " << y << " Minutes : " << z << " Seconds" << endl;
		    }
		
		    if (x==24)
		    {
			   x = 0;
			   system("cls");
			   cout << x << " Hours : " << y << " Minutes : " << z << " Seconds" << endl;
		    }
		}
	}
	
	return 0;
}   
