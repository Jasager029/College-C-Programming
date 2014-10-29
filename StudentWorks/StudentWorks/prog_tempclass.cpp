#include <iostream>
using namespace std;
template <class T>

void sw(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

void tempclass()
{
	int a, b;
	float c, d;
	cout << "Input two integers:" << endl;
	cin >> a >> b;
	cout << endl << "Input two float numbers:" << endl;
	cin >> c >> d;
	sw(a, b);
	sw(c, d);
	cout << endl << "After running the template class the numbers were changed." << endl;
	cout << "The two integers are now: ";
	cout << a << " and " << b << endl;
	cout << "The two float numbers are now: ";
	cout << c << " and " << d << endl;
	cout << "They were switched!" << endl;
}