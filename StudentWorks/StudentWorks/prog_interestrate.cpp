#include <iostream>
#include <iomanip>
using namespace std;

void interestrate()
{
	double initial, rate, interest;
	int year, count = 1;
	cout << "Enter initial Principal: ";
	cin >> initial;
	cout << "Enter Annual Percentage Rate: ";
	cin >> rate;
	cout << "Enter Number of Years: ";
	cin >> year;
	cout << endl;
	cout << "Year      Interest     Principal" << endl;
	cout << "--------------------------------" << endl;

	while (count <= year)
	{
		cout << setw(3) << count << "      ";
		interest = (initial*(rate*.01));
		cout << fixed << setw(9) << setprecision(2) << interest << "     ";
		initial += interest;
		cout << fixed << setw(9) << setprecision(2) << initial << endl;
		count++;
	}
	cout << endl;
}