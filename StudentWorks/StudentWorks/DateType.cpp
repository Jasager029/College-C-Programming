//DateType.cpp
//IMPLEMENTATION FILE
#include "DateType.h"
#include <iostream>
using namespace std;

void DateType::Set(int newmonth, int newday, int newyear)
{
	month = newmonth;
	day = newday;
	year = newyear;
}

void DateType::Write() const
{
	cout << month << '/' << day << '/' << year << endl;
}

bool DateType::Equal(DateType otherDate) const
{
	if ((month == otherDate.month)
		&& (day == otherDate.day)
		&& (year == otherDate.year))
		return true;
	else
		return false;
}

void DateType::Nextday()
{
	int monthend;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:monthend = 31; break;
	case 2:monthend = 28; break;
	case 4:
	case 6:
	case 9:
	case 11:
	default:monthend = 30;
	}
	day++;
	if (day>monthend)
	{
		month++;
		day = 1;
	}
	if (month>12)
	{
		year++;
		month = 1;
	}
	cout << endl << "The day after that will be:" << endl;
}