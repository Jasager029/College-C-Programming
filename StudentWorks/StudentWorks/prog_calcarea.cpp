#include <iostream>
#include <string>
#include "proglist.h"
using namespace std;

int findAreaOfRectangle(int height, int width);
double findAreaOfTriangle(double base, double height);

void calcarea()
{
	string answer;

	cout << "Would you like to calculate the area of a rectangle or triangle?" << endl;
	cin >> answer;
	cout << endl;

	if (answer == "rectangle")
	{
		rectarea();
	}
	else if (answer == "triangle")
	{
		triarea();
	}
}

void rectarea()
{
	int height, width;
	cout << "Enter a height: ";
	cin >> height;
	cout << endl << "Enter a width: ";
	cin >> width;

	cout << endl << "The area of the rectangle is ";
	cout << findAreaOfRectangle(height, width) << endl;
}

void triarea()
{
	double base, height;
	cout << "Enter a base: ";
	cin >> base;
	cout << endl << "Enter a height: ";
	cin >> height;

	cout << endl << "The area of the triangle is ";
	cout << findAreaOfTriangle(base, height) << endl;
}

int findAreaOfRectangle(int height, int width)
{
	return height*width;
}

double findAreaOfTriangle(double base, double height)
{
	return 0.5*base*height;
}