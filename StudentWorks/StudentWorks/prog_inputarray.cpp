#include <iostream>
using namespace std;

void inputarray()
{
	float *x, count = 0, avg;
	int size, index;

	cout << "Enter the array size: ";
	cin >> size;

	x = new float[size];
	if (x == NULL)
		exit(-1);

	for (index = 0; index <= size - 1; index++)
	{
		cout << "Input the data for array: ";
		cin >> x[index];
		count += x[index];
	}

	avg = count / size;
	cout << "The average: " << avg << endl;
	cout << "The array will now be deleted." << endl;
	delete[]x;
}