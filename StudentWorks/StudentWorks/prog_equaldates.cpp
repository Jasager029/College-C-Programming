#include <iostream>
using namespace std;

struct date
{
	int month;
	int day;
	int year;
};

void equaldates()
{
	date date1, date2;
	cout << "Enter month, day and year for date #1: " << endl;
	cin >> date1.month >> date1.day >> date1.year;
	cout << endl << "Enter month, day and year for date #2: " << endl;
	cin >> date2.month >> date2.day >> date2.year;
	cout << endl;

	if (date1.month == date2.month && date1.day == date2.day && date1.year == date2.year)
		cout << "The two dates are the same." << endl;
	else
		cout << "The two dates are not the same." << endl;
}