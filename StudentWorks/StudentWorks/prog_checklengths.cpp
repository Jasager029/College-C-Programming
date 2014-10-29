#include <iostream>			//enables use of cout
#include <iomanip>
using namespace std;

void checklengths() {
	cout << "Char: " << sizeof(char) << endl;
	cout << "Short: " << sizeof(short) << endl;
	cout << "Int: " << sizeof(int) << endl;
	cout << "Long: " << sizeof(long) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "Double: " << sizeof(double) << endl;
	cout << "Long Double: " << sizeof(long double) << endl;
}