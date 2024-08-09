#include<iostream>

using namespace std;

int getHighestInRow (int array1[3][3] , int row)
{
int number=0;
for (int i=0 ; i<3 ; i++)
{
if (number < array1[3][i])
{
number = array1[3][i] ;
}
}
return number;
}

int getLowestInRow ()
{
return ;
}
int Transpose ()
{return ;}

int leftDiagonalTotal ()
{
return ;
}

int rightDiagonalTotal ()
{
return ;
}

int Multiply()
{
return ;
}



int main ()
{

int input=0;
cout<<"Enter 1 For Highest in row!"<<endl;
cout<<"Enter 2 For Lowest in row!"<<endl;
cout<<"Enter 3 For transpose! "<<endl;
cout<<"Enter 4 For Right diagonal total!"<<endl;
cout<<"Enter 5 For left diagonal total!"<<endl;
cout<<"Enter 6 For Multiplication!"<<endl;
cin>>input;

switch (input) 
{
case 1 :

int array1[3][3];
for (int i=0 ; i<3 ; i++)
{
   for (int j=0 ; j<3 ; j++)
   {
      array1[i][j]=0;
   }
}
cout<<"Enter Values for array ! "<<endl;
for (int i=0 ; i<3 ; i++)
{
   for (int j=0 ; j<3 ; j++)
   {
      int in=0;
      cout<<"Enter "<<endl;
      cin>>in;
      array1[i][j]=in;
   }
}

cout<<"Enter row number : ";
int row=0;
cin>>row;
int ans = getHighestInRow (array1 , row);
cout<<"Highest Number is : " << ans <<endl;
break;


case 2 :
int array1[3][3];
for (int i=0 ; i<3 ; i++)
{
   for (int j=0 ; j<3 ; j++)
   {
      array1[i][j]=0;
   }
}
cout<<"Enter Values for array ! "<<endl;
for (int i=0 ; i<3 ; i++)
{
   for (int j=0 ; j<3 ; j++)
   {
      int in=0;
      cout<<"Enter "<<endl;
      cin>>in;
      array1[i][j]=in;
   }
}

cout<<"Enter row number : ";
int row=0;
cin>>row;
int ans = getHighestInRow (array1 , row);
cout<<"Highest Number is : " << ans <<endl;
break;
cout<<""<<endl;
break;
case 3 :
cout<<""<<endl;
break;
case 4 :
cout<<""<<endl;
break;
case 5 :
cout<<""<<endl;
break;
case 6 :
cout<<""<<endl;
break;
} 





return 0; 
}
