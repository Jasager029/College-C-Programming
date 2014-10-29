#include "Grade.h"
#include <iostream>
using namespace std;

void manipclass()
{
	int newid, newscore;
	Grade g1, g2;

	cout << "There is a class called Grade and two objects of that class. The first object uses default values, shown here:" << endl;
	g1.Write();
	cout << endl << "You can customize the other object." << endl;
	cout << "Please enter the id: ";
	cin >> newid;
	cout << "Please enter the score: ";
	cin >> newscore;
	g2.Set(newid, newscore);
	cout << endl << "The second object's values are now as follows:" << endl;
	g2.Write();
}