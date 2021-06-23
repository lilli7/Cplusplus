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
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "Rectangle.hpp"
using namespace std;

/*class Rectangle {
	double width, height;
public:
	void set_values (double, double);
} rect;*/

/*class Rectangle{
	const private double width, height;
public:
	Rectangle();
	Rectangle(double, double);
	double get_width();
	double get_height();
	double getArea() {return width*height;}
	double getPerimeter(){return 2*width+2*height;}
	printRectangle(const std::string& ObjectName);
}rect;*/

Rectangle :: Rectangle()
{
	width = 1.0;
	height = 1.0;
}

Rectangle :: Rectangle(double w, double h)
{
	width = w;
	height =h;
}

/*double Rectangle :: get_width()
{
	return width;
}

double Rectangle :: get_height()
{
	return height;
}*/

/*int main()
{
	Rectangle rect;
	double width;
	double height;
	//get width from user
	cout<<"Enter width";
	cin>>width;
	
	//get height from user
	cout<<"Enter height";
	cin>> height;
	
	return 0;
}*/

void Rectangle :: printRectangle()
{
	double w = get_width();
	double h = get_height();
	double a = getArea();
	double p = getPerimeter(); 
	cout <<" width:" <<w<< endl;
	cout<<" height: " << h<< endl;
	cout<<"area: " << a  << endl;
	cout <<" perimeter: "<< p << endl; 
	cout<<"Rectangle"<< " is " << w << " wide and " << h << "high."<<endl;
}
/*Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}*/

