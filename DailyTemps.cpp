// Name: Lillibeth Hunter & Jade Ainsworth
// Class: CS 3305
// Term: Summer 2021
// Instructor: Dr. Haddad
// Assignment: 1

//Default Constructor That Rads Input For Each Day
//Void SetTemp(); takes in array, index spot, and new tempreture and sets it
//Int FreezingDays(); that returns a counter of days under 32 degrees
//WarmestDay(); iterates through the array, holding onto the highest tempreture in a variable, replaces it when it finds a tempreture greater, and returns final value at the end of the loop
#include "DailyTemps.hpp"
#include <iostream>
//using namespace Assignment1;
using namespace std;

/*class DailyTemps{
public:
	DailyTemps(int temps[]);
	int Temps[7]={80, 80, 80, 80, 80, 80, 80};//default values for constructor
	int temps[7];
};*/
DailyTemps::DailyTemps()
{
	for(int i = 0; i < 7; i++)
	{
		temps[i]=0;
	}
}


DailyTemps::DailyTemps(int t[7])
{
	for(int i =0; i <7; i++)
	{
		temps[i] = t[i];
	}
}

int DailyTemps::freezing()
{
	int count =0;
	for(int i = 0; i < 7; i++)
	{
		if (temps[i] < 32)
		{
			count++;
		}
	}
	return count;
}

void DailyTemps::warmest()
{
	//warmest will be initially the first value
	int warmest = temps[0];
	int warmDay =0;
	for(int i = 0; i < 7; i++)
	{
		//if the next value is higher than the warmest
		if(temps[i] > warmest)
		{
			//set the warmest value
			warmest = temps[i];
			warmDay = i;
		}
	}
	switch(warmDay)
	{
		case 0:
		cout<< "The warmest day of the week is Monday ";
		break;
		
		case 1:
		cout<< "The warmest day of the week is Tuesday ";
		break;
		
		case 2:
		cout<< "The warmest day of the week is Wednesday";
		break;
		
		case 3:
		cout<< "The warmest day of the week is Thursday ";
		break;
		
		case 4:
		cout<< "The warmest day of the week is Friday ";
		break;
		
		case 5:
		cout<< "The warmest day of the week is Saturday ";
		break;
		
		case 6:
		cout<< "The warmest day of the week is Sunday ";
		break;
	}
	cout<< endl;
}

void DailyTemps::setTemp(int day, int temp)
{
	temps[day] = temp;
}

void DailyTemps::printTemps()
{
	for(int i = 0; i < 7; i++)
	{
		switch(i)
		{
			case 0:
			cout<< "Monday    " << temps[0];
			break;
			
			case 1:
			cout<< "Tuesday   " << temps[1];
			break;
			
			case 2:
			cout<< "Wednesday " << temps[2];
			break;
			
			case 3:
			cout<< "Thursday  " << temps[3];
			break;
			
			case 4:
			cout<< "Friday    " << temps[4];
			break;
			
			case 5:
			cout<< "Saturday  " << temps[5];
			break;
			
			case 6:
			cout<< "Sunday    " << temps[6];
			break;
		}
		cout <<endl;
	}
}

