// Name: Lillibeth Hunter & Jade Ainsworth
// Class: CS 3305
// Term: Summer 2021
// Instructor: Dr. Haddad
// Assignment: 1
#include <iostream>
#include <string>
#include "DailyTemps.hpp"
using namespace std;
 //using namespace Assignment1;
int main()
{
	DailyTemps week;
	int test[7];
	int cont=-1;
	while(cont != 0)
	{
		cout<<"Please enter temperature for the following days"<<endl;
		//iterate through week array
		for(int i = 0; i <7; i++)
		{
			switch(i)
			{
				case 0:
				cout<< "Enter temperature for Monday ";
				break;
				
				case 1:
				cout<< "Enter temperature for Tuesday ";
				break;
				
				case 2:
				cout<< "Enter temperature for Wednesday ";
				break;
				
				case 3:
				cout<< "Enter temperature for Thursday ";
				break;
				
				case 4:
				cout<< "Enter temperature for Friday ";
				break;
				
				case 5:
				cout<< "Enter temperature for Saturday ";
				break;
				
				case 6:
				cout<< "Enter temperature for Sunday ";
				break;
			}
			//take the temperature from user
			cin>> test[i];
		}
		week.copyArray(test);
		int cold = week.freezing();
		week.warmest();
		cout <<"There are " << cold << " frozen days"<< endl;
		week.printTemps();
		cout<<"Do you want to continue? (0 to stop)"<<endl;
		cin>> cont;
	}
	return 0;
}

