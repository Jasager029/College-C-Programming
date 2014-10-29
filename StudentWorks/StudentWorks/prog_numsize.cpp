#include <iostream>
using namespace std;

void numsize()
{
	int number, range, big = 0, small = 0, count = 0, once = 0;

	cout << "How many numbers are you going to compare?" << endl;
	cin >> range;
	cout << endl << "Please enter " << range << " integers of your choosing:" << endl;

	while (count<range)
	{
		cin >> number;
		if (once == 0)
		{
			small = number;
			once++;
		}
		if (number > big)
		{
			big = number;
		}
		if (number < small)
		{
			small = number;
		}
		count++;
	}
	cout << endl;
	cout << "The largest number is: " << big << endl;
	cout << "The smallest number is: " << small << endl;
}