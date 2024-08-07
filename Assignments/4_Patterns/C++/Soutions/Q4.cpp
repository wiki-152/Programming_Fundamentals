/*
   Muhammad Waqas Shahid Khan
   22I - 2469
   BS SE-E
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include<unistd.h>

using namespace std;

string validation (string in)
{
	cin>>in;
	while (in != "y" && in != "Y" && in != "n" && in != "N")
	{
		system("color c");
		cout<< "Invalid Input! Enter Y or N : ";
		cin>> in;
	}
	return in ;
}

int amountCalculator (int amount , int n , int win_amount)
{	
	if(n<=3)
	{
		win_amount = win_amount + 100 ;
	}
	if(n<=6 && n>3)
	{
		win_amount = win_amount + 1000 ;
	}
	if(n<=10 && n>6)
	{
		win_amount = win_amount + 10000 ;
	}
	if(n<=15 && n>10)
	{
		win_amount = win_amount + 15000 ;
	}
	
	return win_amount;
}

int main ()
{	
    string name;
	cout<<"Enter Name : ";
	system("color a");
	cin>> name;
	system("color f");
	
	int random = 0;
	int category = 0;
	string categoryName ;
	string answer; 
	int win_amount =0 ;
	
	for (int i=1 ; i<=15 ; i++)
	{
		
		srand(i);
		random = rand()%50+50;
		if (random<=100 or random>=50)
		{
			srand(i);
	        random = rand()%3 + 1 ;
	        if (random == 1)
	        {
	    	    category = 1;
	    	    categoryName = "Science";
		    }
		    if (random == 2)
	        {
	    	    category = 2;
	    	    categoryName = "History";
		    }
		    if (random == 3)
	        {
	    	    category = 3;
	    	    categoryName = "Sports";
		    }
		    if (random == 4)
	        {
	    	    category = 4;
	    	    categoryName = "Pop Culture";
		    }
		    
			if (category==1)
			{
				srand(i);
				int category_random = rand()%15 + 1;
				if (category_random == 1)
				{
					cout<<"Why is the sky blue?"<<endl;
				}
				if (category_random == 2)
				{
					cout<< "How many laws did Newton give?" <<endl;
				}
				if (category_random == 3)
				{
					cout<<"What is the distance of Sun and Moon?"<<endl;
				}
				if (category_random == 4)
				{
					cout<< "What is the distance of Sun and Earth?"<<endl;
				}
				if (category_random == 5)
				{
					cout<< "What is the distance of Moon and Earth?"<<endl;
				}
				if (category_random == 6)
				{
					cout<< "When was 1st computer invented?"<<endl;
				}
				if (category_random == 7)
				{
					cout<< "Who invented virus?"<<endl;
				}
				if (category_random == 8)
				{
					cout<<"What is a chip made of?"<<endl;
				}
				if (category_random == 9)
				{
					cout<<"Where was malaria detected?"<<endl;
				}
				if (category_random == 10)
				{
					cout<<"Who invented phone?"<<endl;
				}
				if (category_random == 11)
				{
					cout<<"Who invented 0?"<<endl;
				}
				if (category_random == 12)
				{
					cout<<"Who invented microscope?"<<endl;
				}
				if (category_random == 13)
				{
					cout<< "What are microbes?" <<endl;
				}
				if (category_random == 14)
				{
					cout<<"What are the 5 kingdoms of living things?"<<endl;
				}
				if (category_random == 15)
				{
					cout<<"How was cause of malaria found?"<<endl;
				}
			}
		    
		    if (category==2)
			{
				srand(i);
				int category_random = rand()%15 + 1;
				if (category_random == 1)
				{
					cout<<"Who was Alexander The Great?"<<endl;
				}
				if (category_random == 2)
				{
					cout<< "When was war of independence fought?" <<endl;
				}
				if (category_random == 3)
				{
					cout<<"When WW2 happened?"<<endl;
				}
				if (category_random == 4)
				{
					cout<< "When did WW3 happen?"<<endl;
				}
				if (category_random == 5)
				{
					cout<< "When did Pakistan came into existence?"<<endl;
				}
				if (category_random == 6)
				{
					cout<< "Who was Tipu Sultan?"<<endl;
				}
				if (category_random == 7)
				{
					cout<< "What is date of birth of Allama Iqbal?"<<endl;
				}
				if (category_random == 8)
				{
					cout<<"Date of birth of Quaid?"<<endl;
				}
				if (category_random == 9)
				{
					cout<<"Who was Shakespeare?"<<endl;
				}
				if (category_random == 10)
				{
					cout<<"How long did Mughal empire rule?"<<endl;
				}
				if (category_random == 11)
				{
					cout<<"Who invented 0?"<<endl;
				}
				if (category_random == 12)
				{
					cout<<"When was microscope invented?"<<endl;
				}
				if (category_random == 13)
				{
					cout<< "Why was war of independence fought?" <<endl;
				}
				if (category_random == 14)
				{
					cout<<"Who betrayed Tipu Sultan?"<<endl;
				}
				if (category_random == 15)
				{
					cout<<"How many wars did Pakistan fight?"<<endl;
				}
				
			}
		    
		    if (category==3)
			{
				srand(i);
				int category_random = rand()%15 + 1;
				if (category_random == 1)
				{
					cout<<"What are 5 rules of football?"<<endl;
				}
				if (category_random == 2)
				{
					cout<< "What are 5 rules of cricket?" <<endl;
				}
				if (category_random == 3)
				{
					cout<<"What are 5 rules of volleyball?"<<endl;
				}
				if (category_random == 4)
				{
					cout<< "What are 5 rules of badminton?"<<endl;
				}
				if (category_random == 5)
				{
					cout<< "What are 5 rules of table tennis?"<<endl;
				}
				if (category_random == 6)
				{
					cout<< "What are 5 rules of lawn tennis?"<<endl;
				}
				if (category_random == 7)
				{
					cout<< "Who won the last champions league?"<<endl;
				}
				if (category_random == 8)
				{
					cout<<"Who won the last t20 world cup?"<<endl;
				}
				if (category_random == 9)
				{
					cout<<"Who won the last ODI world cup?"<<endl;
				}
				if (category_random == 10)
				{
					cout<<"Who won the last asia cup?"<<endl;
				}
				if (category_random == 11)
				{
					cout<<"How many players are in football?"<<endl;
				}
				if (category_random == 12)
				{
					cout<<"How many players are in cricket?"<<endl;
				}
				if (category_random == 13)
				{
					cout<< "How many players are in volleyball?" <<endl;
				}
				if (category_random == 14)
				{
					cout<<"How many players are in table tennis?"<<endl;
				}
				if (category_random == 15)
				{
					cout<<"How many players are in lawn tennis?"<<endl;
				}	
			}
			
			if (category==4)
			{
				srand(i);
				int category_random = rand()%15 + 1;
				if (category_random == 1)
				{
					cout<<"What are most famous music types in USA?"<<endl;
				}
				if (category_random == 2)
				{
					cout<< "What are 3 significant bands ?" <<endl;
				}
				if (category_random == 3)
				{
					cout<<"Who played billie jeans song?"<<endl;
				}
				if (category_random == 4)
				{
					cout<< "What bands comprised of?"<<endl;
				}
				if (category_random == 5)
				{
					cout<< "Which is the highest grossing film?"<<endl;
				}
				if (category_random == 6)
				{
					cout<< "What was role played by tom in mission impossible?"<<endl;
				}
				if (category_random == 7)
				{
					cout<< "Who was the actor of iron man?"<<endl;
				}
				if (category_random == 8)
				{
					cout<<"Who was the actor of thor?"<<endl;
				}
				if (category_random == 9)
				{
					cout<<"Who was the singer of smooth criminal?"<<endl;
				}
				if (category_random == 10)
				{
					cout<<"Who was the actor of hulk?"<<endl;
				}
				if (category_random == 11)
				{
					cout<<"How was avengers filmed?"<<endl;
				}
				if (category_random == 12)
				{
					cout<<"How did michael earn his billion?"<<endl;
				}
				if (category_random == 13)
				{
					cout<< "Who were the queens?" <<endl;
				}
				if (category_random == 14)
				{
					cout<<"Who was the lead singer of queens?"<<endl;
				}
				if (category_random == 15)
				{
					cout<<"Who is the alltime famous artist?"<<endl;
				}
				
			}
		    
		    
		    cout<< "ROUND # " << i << endl ;
		    cout<< categoryName << endl << "Is The Answer Correct? Y/N : ";
		    string in;
		    answer = validation (in);
		    system("color f");
		    
		    if ((answer == "y" or answer == "Y") )
		    {
		    	int n = i;
		    	int amount;
		    	win_amount = amountCalculator(amount , n , win_amount);
			}
			sleep(0.5);
			system("cls");
		}
		
	}
	
	system ("color a");
	cout<<"Congratulations "<< name <<" !" <<endl;
	cout<<"You Won " << win_amount;
	
	
	
	return 0;
}


