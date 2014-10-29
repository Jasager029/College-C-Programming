#include <iostream>			//enables use of cout
#include <string>
using namespace std;

void tempconvert()
{
	int answer;
	double temp;

	cout << "Do you wish to convert Celsius to Fahrenheit (1) or vice versa (2)?" << endl;
	cin >> answer;

	if (answer == 1)
	{
		cout << "Please enter the Celsius temperature:" << endl;
		cin >> temp;
		cout << "Celsius temperature " << temp << " is " << 32 + temp*1.8 << " in Fahrenheit." << endl;
	}
	if (answer == 2)
	{
		cout << "Please enter the Fahrenheit temperature:" << endl;
		cin >> temp;
		cout << "Fahrenheit temperature " << temp << " is " << ((temp-32)*5)/9 << " in Celsius." << endl;
	}
}