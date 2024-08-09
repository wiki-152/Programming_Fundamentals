#include<iostream>
#include<fstream>

using namespace std;

void fn1 (string contents , ifstream &store )
{
 while ((getline (store, contents)))
  {
      cout<<contents<< endl ;
  }
}

int fn2 (string contents , ifstream &store)
{
int alpha_count = 0 ;
while ((getline (store, contents)))
  {
      for (int i=0 ; i<contents.size() ; i++)
      {
          if (contents[i] != 32 && contents[i] != '.')
          {
              alpha_count = alpha_count + 1 ;
          }
      }
  }
  return alpha_count;
}

int fn3 (string contents , ifstream &store )
{
int word_count = 0 ;
while ((getline (store, contents)))
  {
      for (int i=0 ; i<contents.size() ; i++)
      {
          if (contents[i] == 32)
          {
             word_count = word_count + 1 ;
          }
      }
  }
 return word_count ; 
}
int main ()
{

string lines = "\"The rose is red. \nA girl is playing there. \nThere is a playground. \nAn aeroplane is in the sky.  \nNumbers are not allowed in the password.";
ofstream file2 ("File2.txt");

file2 << lines ;

file2.close();

ifstream store("File2.txt");
string contents;

cout<< "1 For Displaying Contents"<<endl;
cout<< "2 For Alphabet Count"<<endl;
cout<< "3 For Word Count"<<endl;
int input = 0 ;
cin>>input;

if (input==1)
{
fn1 (contents , store );
}

int alpha_count = 0 ;
if (input==2)
{
  
  int alpha_count = fn2 (contents ,store);
  cout<< "Number of Alphabets : " << alpha_count << endl; 
  
}

int word_count = 0 ;
if (input==3)
{
  word_count = fn3 (contents , store );
  cout<< "Word Count : " << word_count << endl ;
  
}



return 0 ; 
}
