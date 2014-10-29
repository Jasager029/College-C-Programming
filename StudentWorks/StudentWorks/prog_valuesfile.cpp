#include <iostream>
#include <fstream>
using namespace std;

void valuesfile()
{
	int count, value[10], largest;
	cout << "This program is going to read from a file and pull the largest value from it." << endl;

	ifstream InputFile;
	InputFile.open("values.txt.");

	for (count = 0; count<10; count++)
	{
		InputFile >> value[count];
		if (count == 0)
		{
			largest = value[count];
		}
		if (count != 0)
		{
			if (value[count]>largest)
			{
				largest = value[count];
			}
		}
	}

	cout << endl << "The largest value from the file was " << largest << ".";
	cout << endl;
	InputFile.close();
}