#include <iostream>			//enables use of cout
#include <string>
#include "proglist.h"
using namespace std;

int main()
{
	bool loop = true;
	int answer;

	while (loop)
	{
		cout << endl;
		cout << "Which of the following would you like to see?" << endl;
		cout << endl;
		cout << "(1) Personal Info" << endl;
		cout << "(2) Lengths of Data Types" << endl;
		cout << "(3) Calculate Volume" << endl;
		cout << "(4) Calculate Area" << endl;
		cout << "(5) Division with Notation Options" << endl;
		cout << "(6) Quadrant Check" << endl;
		cout << "(7) Temperature Conversion" << endl;
		cout << "(8) Find Leap Years" << endl;
		cout << "(9) Number Size Comparison" << endl;
		cout << "(10) Annual Interest % Rate" << endl;
		cout << "(11) Drag Force" << endl;
		cout << "(12) Car Salespeople" << endl;
		cout << "(13) Date Comparison" << endl;
		cout << "(14) Read From File" << endl;
		cout << "(15) Manipulate a Struct" << endl;
		cout << "(16) Date Formatter with Class" << endl;
		cout << "(17) Manipulate a Class" << endl;
		cout << "(18) Storing Phone Numbers" << endl;
		cout << "(19) Basic Pointer Test" << endl;
		cout << "(20) Input Array Data" << endl;
		cout << "(21) Template Class Test" << endl;
		cout << "(22) Simple Error Handler" << endl;
		cout << "(99) Exit" << endl;
		cout << endl;
		cin >> answer;
		cout << endl;

		switch (answer)
		{
		case 1 :
			myinfo();
			break;
		case 2 :
			checklengths();
			break;
		case 3 :
			calcvolume();
			break;
		case 4 :
			calcarea();
			break;
		case 5 :
			notation();
			break;
		case 6 :
			quadrant();
			break;
		case 7 :
			tempconvert();
			break;
		case 8 :
			leapyear();
			break;
		case 9 :
			numsize();
			break;
		case 10 :
			interestrate();
			break;
		case 11 :
			dragforce();
			break;
		case 12 :
			carsales();
			break;
		case 13 :
			equaldates();
			break;
		case 14 :
			valuesfile();
			break;
		case 15 :
			manipstruct();
			break;
		case 16 :
			dateclass();
			break;
		case 17 :
			manipclass();
			break;
		case 18 :
			phones();
			break;
		case 19 :
			pointers();
			break;
		case 20 :
			inputarray();
			break;
		case 21 :
			tempclass();
			break;
		case 22 :
			errortest();
			break;
		case 99 :
			loop = false;
			break;
		default :
			cout << "Not a valid command!" << endl;
			break;
		}
	}

	return 0;
}