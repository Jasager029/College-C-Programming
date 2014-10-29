#include <iostream>
#include "proglist.h"
using namespace std;

struct Grade
{
	int id;
	float score;
};

void manipstruct()
{
	Grade g[5];
	int count, answer;
	float avg = 0;
	bool progloop = true, oploop = true;
	
	cout << "First, you must enter data for five students!" << endl << endl;

	while (progloop)
	{
		// User must enter student data one by one
		for (count = 0; count < 5; count++)
		{
			cout << "Enter the ID and score of student #" << count + 1 << endl;
			cin >> g[count].id >> g[count].score;
			avg += g[count].score;
			cout << endl;
		}
		oploop = true;
		while (oploop)
		{
			// User must make a choice on what task to perform next
			cout << "Okay. What would you like to do next?" << endl;
			cout << "(1) List student data" << endl;
			cout << "(2) Show average of grades" << endl;
			cout << "(3) Enter new data" << endl;
			cout << "(4) End program" << endl;
			cout << endl;
			cin >> answer;
			cout << endl;

			switch (answer)
			{
			case 1:
				// Student data is listed for the user
				for (count = 0; count < 5; count++)
				{
					cout << "Student #" << count + 1 << " has ID " << g[count].id << " and a grade of " << g[count].score << endl;
				}
				cout << endl;
				break;
			case 2:
				// Average score is displayed for the user
				cout << "The average score of the five students is " << avg / 5 << "." << endl << endl;
				break;
			case 3:
				// User decides to enter new student data
				oploop = false;
				break;
			case 4:
				// User is exiting the program
				oploop = false;
				progloop = false;
				break;
			default:
				cout << "Not a valid command!" << endl;
				break;
			}
		}
	}
}