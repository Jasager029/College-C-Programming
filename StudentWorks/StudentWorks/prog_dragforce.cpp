#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calcdforce(double coeff, double area, double velocity);

void dragforce()
{
	double coeff, area, velocity;
	cout << "Please enter the drag coefficient: ";
	cin >> coeff;
	cout << endl << "Please enter the area: ";
	cin >> area;
	cout << endl << "Please enter the velocity: ";
	cin >> velocity;
	cout << endl;

	cout << "The drag force of the vehicle is " << calcdforce(coeff, area, velocity) << endl;
}

double calcdforce(double coeff, double area, double velocity)
{
	return 0.5*coeff*area*1.23*pow(velocity, 2);
}