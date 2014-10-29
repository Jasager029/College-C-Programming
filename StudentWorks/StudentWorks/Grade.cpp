// Grade.cpp

#include "Grade.h"
#include <iostream>
using namespace std;

Grade::Grade()
{
	id = 0;
	score = 0;
}

Grade::Grade(int newid, int newscore)
{
	id = newid;
	score = newscore;
}

void Grade::Set(int newid, int newscore)
{
	id = newid;
	score = newscore;
}

void Grade::Write() const
{
	cout << " ID: " << id << " Score: " << score << endl;
}