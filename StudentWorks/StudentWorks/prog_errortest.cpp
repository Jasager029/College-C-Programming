#include <iostream>
#include <cmath>
using namespace std;

double Volume(double r, double h)
{
	const double pi = 3.14159;

	if (r<0 || h<0)
		throw 1;
	else
		return pi*pow(r, 2)*h / 3;
}

void errortest()
{
	double r, h;
	cout << "Enter radius: ";
	cin >> r;
	cout << "Enter height: ";
	cin >> h;

	try
	{
		cout << "Volume: " << Volume(r, h);
	}
	catch (int e)
	{
		cout << "Error #: " << e;
	}
}