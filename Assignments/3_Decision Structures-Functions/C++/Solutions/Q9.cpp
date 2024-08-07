/* Muhammad  Waqas Shahid Khan
22i - 2469                     */

#include <iostream>

using namespace std;

string error (string err , bool isConnected1 , float availBandwidth1 )
{
	err = "Invalid Input! Restart Program!" ;
    if (isConnected1 == false)
    {
    	err = "No Wifi! Connect Wifi and Restart Program!" ;
    	cout<< err << endl ;
	}
	
	if (availBandwidth1 < 20)
	{
		err = "Insufficient Bandwidth";
		cout<< err << endl;
	}
	return err ;
}

string error (string err)
{
	err = "Invalid File Type! Cannot Be Saved";
	cout<< err << endl;
}

bool isConnected (int input)
{
	cout<< "1 For Connected 2 For Not-Connected : ";
	cin>> input;
	
	if (input != 1 && input != 2)
	{
		string err ;
		bool isConnected1;
		float availBandwidth1;
		char type1 ;
		error (err , isConnected1 , availBandwidth1 );
	}
	if (input == 1)
	{
		return true;
	}
	if (input == 2)
	{
		return false ;
	}
}

float availableBandwidth (float input)
{
	cout<< "Enter Bandwidth : " ;
	cin>> input;
	return input ;
}

void startApplication ()
{
    cout<<"Program Starting!"<< endl;	
}

void stopApplication ()
{
    cout<< "Program Stopping!" ;
}

char getFileType (char type)
{
	cout<< "Enter (T) for txt " << endl;
	cout<< "Enter (M) for mp4 " << endl;
	cout<< "Enter (P) for mp3 " << endl;
	cout<< "Enter (I) for invalid " << endl;
	cout<< "Enter File Type : " ;
	cin>> type;
	return type;
}

string saveFile (string location , string filename , char type1)                                  
{
	cout<< "Enter Filename : ";
	cin>> filename;
	char type;
	type1 = getFileType (type);
	if (type1 == 'T' || type1 == 't')
	{
		location = "Text Files";
		return filename;
	}
	if (type1 == 'M' || type1 == 'm')
	{
		location = "Video Files";
		return filename;
	}
	if (type1 == 'P' || type1 == 'p')
	{
		location = "Sound Files";
		return filename;
	}
	if (type1 == 'I' || type1 == 'i')
	{
		string err;
		bool isConnected1;
		float availBandwidth1;
		char type1;
		error (err);
		return "invalid";
	}
}

bool isFileSaved (string filename)
{
	
}

bool networkStartValidator (string message)
{
	int input ;
	bool isConnected1 = isConnected (input) ;
	float availBandwidth1 =  availableBandwidth (input) ;
	
	if ((isConnected1 == true) && (availBandwidth1 > 20))
	{
		string msg;
		startApplication ();
		return true; 
	}
	if ((isConnected1 == false) || (availBandwidth1 < 20))
	{
		string err;
		char type1;
		error (err , isConnected1 , availBandwidth1);
		return false;
	}
	
}

string fileSaver (string filename)
{
	string location;
	char type1;
	string ch = saveFile (location , filename , type1);
	return ch;
}

string networkSend (string returnMessage , string filename )
{
	returnMessage = " File has been saved! ";
	cout<< "["<< filename << "]"<< returnMessage ;
	
}

int main ()
{
	string message ;
	string filename;

	bool a1 = networkStartValidator (message) ;

	if (a1 == true)
	{
		filename = fileSaver (filename);
		
		if (filename != "invalid")
		{
		string returnMessage;
		networkSend (returnMessage , filename );
		}	
	}
	return 0;
}
