#include <iostream>
#include <iomanip>
using namespace std;

void leapyear()
{
	int start, end, year;

	cout << "Enter a starting year and an end year: ";
	cin >> start >> end;
	cout << endl;

	for (year = start; year <= end; year++)
	{
		cout << year << " - ";
		if (!(year % 4))
		if (!(year % 100) && year % 400)
			cout << "This isn't a leap year." << endl;
		else
			cout << "This is a leap year." << endl;
		else
			cout << "This isn't a leap year." << endl;
	}
	cout << endl;
}