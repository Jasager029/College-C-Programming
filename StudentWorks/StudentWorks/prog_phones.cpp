#include "intphone.h"
#include <iostream>
#include <string>
using namespace std;

void phones()
{
	Phone x;
	InternationalPhone y;

	int area1, area2, num1, num2;
	string country;

	cout << "There are two classes, Phone and InternationalPhone, and one object of each." << endl;
	cout << "Let's customize the Phone object." << endl << endl;

	cout << "Please enter the area code:" << endl;
	cin >> area1;

	cout << "Please enter the phone number:" << endl;
	cin >> num1;

	x.SetArea(area1);
	x.SetNumber(num1);

	cout << "The Phone object now writes:" << endl;
	x.Print();

	cout << endl << "Let's customize the InternationalPhone object." << endl << endl;

	cout << "Please enter the area code:" << endl;
	cin >> area2;

	cout << "Please enter the phone number:" << endl;
	cin >> num2;

	cout << "Please enter the country name (no spaces):" << endl;
	cin >> country;

	y.SetCountry(country);
	y.SetArea(area2);
	y.SetNumber(num2);

	cout << "The InternationalPhone object now writes:" << endl;
	y.Print();
	cout << endl;
}