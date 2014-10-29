#include <iostream>			//enables use of cout
#include <iomanip>			//enables set manipulators
#include <cmath>			//enables extended math functions
#include <string>
#include "proglist.h"
using namespace std;

void notation()
{
	string answer;

	cout << "Would you like your quotient in fixed or scientific notation?" << endl;
	cin >> answer;
	cout << endl;

	if (answer == "fixed")
	{
		fixednotation();
	}
	else if (answer == "scientific")
	{
		scientificnotation();
	}
}

void fixednotation()
{
	float dividend;
	float divisor;
	int decimals;

	cout << "Please enter a random number:" << endl;
	cin >> dividend;
	cout << "Please enter a random number to divide the first number by:" << endl;
	cin >> divisor;
	cout << "Please enter how many decimal points you would like to see:" << endl;
	cin >> decimals;

	cout << endl;
	cout << "The following results are in fixed notation:" << endl;
	cout << dividend << " divided by " << divisor << " equals " << fixed << setprecision(decimals) << dividend / divisor << endl;
}

void scientificnotation()
{
	float dividend;
	float divisor;

	cout << "Please enter a random number:" << endl;
	cin >> dividend;
	cout << "Please enter a random number to divide the first number by:" << endl;
	cin >> divisor;

	cout << endl;
	cout << "The following results are in scientific notation:" << endl;
	cout << dividend << " divided by " << divisor << " equals " << scientific << dividend / divisor << endl;
}