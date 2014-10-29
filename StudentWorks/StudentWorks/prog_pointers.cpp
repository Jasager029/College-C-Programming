#include <iostream>
using namespace std;

void pointers()
{
	float someFloat = 11.2;
	float* floatPointer = &someFloat;

	cout << "There's a float called someFloat and a pointer called floatPointer." << endl;
	cout << "The address is: " << floatPointer << endl;
	cout << "The content is: " << *floatPointer << endl;

	*floatPointer = 20.5;
	cout << "The new content is: " << someFloat << endl << endl;
}