#include "DateType.h"
#include <iostream>
using namespace std;

void dateclass()
{
	int m, d, y;
	cout << "Please enter the month:";
	cin >> m;
	cout << "Please enter the day:";
	cin >> d;
	cout << "Please enter the year:";
	cin >> y;
	DateType date;
	date.Set(m, d, y);
	date.Write();
	date.Nextday();
	date.Write();
}