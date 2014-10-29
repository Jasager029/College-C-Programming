#include <iostream>			//enables use of cout
#include <string>
using namespace std;

void quadrant()
{
	float x, y;
	cout << "Enter the value for x: ";
	cin >> x;
	cout << "Enter the value for y: ";
	cin >> y;
	cout << endl;

	if (x == 0 && y == 0)
		cout << "The point is on the origin." << endl;
	else if (x == 0)
		cout << "The point is on the y axis." << endl;
	else if (y == 0)
		cout << "The point is on the x axis." << endl;

	if (x > 0 && y > 0)
		cout << "The point is in Quadrant 1." << endl;
	else if (x > 0 && y < 0)
		cout << "The point is in Quadrant 4." << endl;
	else if (x < 0 && y < 0)
		cout << "The point is in Quadrant 3." << endl;
	else if (x < 0 && y > 0)
		cout << "The point is in Quadrant 2." << endl;
}