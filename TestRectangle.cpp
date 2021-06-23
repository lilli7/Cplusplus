// Name: Jade Ainsworth + Lillibeth Hunter
// Class: CS 3305
// Term: Summer 2021
// Instructor: Dr. Haddad
// Assignment: 1

//public
//default constructor that  creats a default rectangle

//overloaded constructor that creats a rectangle with specific values from user

//GetWidth const functiuon that just reads values
//GetHeight const function that just reads values
//getArea returns area (height width)
//GetPerimeter returns perimeter (height2 +width*2)
//PrintRectangle return type string



//private
//double width default 1.0
//double height default of 1.0
//#include "TestRectangle.hpp"
#include <iomanip>
#include <iostream>
#include "Rectangle.hpp"
using namespace std;

int main ()
{
	double width;
	double height;
	Rectangle rect, rect2;
	//rect.printRectangle();
	
	
	int cont;
	cout<<"Enter 0 to stop. Enter a different number to continue."<<endl;
	cin>>cont;
	while(cont != 0)
	{
		//get width from user
	cout<<"Enter width"<<endl;
	cin>>width;
	
	
	//get height from user
	cout<<"Enter height"<<endl;
	cin>> height;
	
	rect2=Rectangle(width, height);
	rect2.printRectangle();
	cout<<"Do you want to continue? (0 to stop)"<<endl;
	cin>> cont;
	}

	return EXIT_SUCCESS;
}
