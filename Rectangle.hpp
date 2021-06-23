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
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
using namespace std;

class Rectangle{
	private: double width, height;
public:
	Rectangle();
	Rectangle(double w, double h);
	const double get_width(){return width;}
	const double get_height(){return height;}
	double getArea() {return width*height;}
	double getPerimeter(){return 2*width+2*height;}
	void printRectangle();
};

#endif // RECTANGLE_HPP
