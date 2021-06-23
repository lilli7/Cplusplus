// Name: Lillibeth Hunter& Jade Ainsworth
// Class: CS 3305
// Term: Summer 2021
// Instructor: Dr. Haddad
// Assignment: 1
#ifndef DAILYTEMPS_HPP
#define DAILYTEMPS_HPP
using namespace std;
//using namespace Assignment1;
	class DailyTemps{

		//int Temps[7]={80, 80, 80, 80, 80, 80, 80};//default values for constructor
		
	public:
		DailyTemps();
		DailyTemps(int t[]);
		int temps[7];
		void setTemp( int day, int temp);
		void warmest();
		int freezing();
		void printTemps();
		void copyArray(int t[]){
			for(int i =0; i <7; i++)
			{
				temps[i] = t[i];
			}
		}
	};
#endif // DAILYTEMPS_HPP
