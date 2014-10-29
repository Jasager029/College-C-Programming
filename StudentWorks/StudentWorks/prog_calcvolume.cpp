#include <iostream>			//enables use of cout
#include <string>
#include "proglist.h"
using namespace std;

void calcvolume() {
	string answer;

	cout << "Would you like to calculate the volume of a cone or cylinder?" << endl;
	cin >> answer;
	cout << endl;

	if (answer == "cone")
	{
		conevolume();
	}
	else if (answer == "cylinder")
	{
		cylindervolume();
	}
}

void conevolume() {
	double PI = 3.14159;	//assign pi
	double radius, height;

	cout << "Please enter the radius:" << endl;
	cin >> radius;
	cout << "Please enter the height:" << endl;
	cin >> height;

	//output of equation, don't change
	cout << "The volume of a cone with radius " << radius
		<< " and height " << height << " is:" << endl;
	cout << (1.0 / 3.0)*PI*radius*radius*height << endl;
}

void cylindervolume() {
	double PI = 3.14159;	//assign pi
	double radius, height, volume;

	cout << "Please enter the radius:" << endl;
	cin >> radius;
	cout << "Please enter the height:" << endl;
	cin >> height;

	cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is:" << endl;
	cout << PI*pow(radius, 2)*height << endl; // volume of a cylinder equation
}