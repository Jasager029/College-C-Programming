// Phone.cpp

#include "phone.h"
#include <iostream>
using namespace std;

void Phone::SetArea(int newarea)
{
	areacode = newarea;
}

void Phone::SetNumber(int newnumber)
{
	phonenumber = newnumber;
}

void Phone::Print()
{
	cout << "Phone #: " << areacode << "-" << phonenumber;
}