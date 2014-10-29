#include <iostream>
#include <vector>
using namespace std;

void carsales()
{
	int x, salesmen, sales, y = 0, z;
	vector<int> cars;

	cout << "How many car salespeople are there?" << endl;
	cin >> salesmen;

	for (x = 0; x<salesmen; x++)
	{
		cout << "Enter number of cars sold by salesperson # " << (x + 1) << ":";
		cin >> sales;
		cars.push_back(sales);

		if (x > 0)
		{
			if (cars[x - 1] < cars[x])
			{
				z = x + 1;
			}
		}
		y += sales;
		cout << endl;
	}

	cout << "Total number of cars sold this month: " << y << endl;
	cout << "Salesperson # " << z << " sold the most cars." << endl;
}