// InternationalPhone.cpp

#include "intphone.h"
#include <iostream>
#include <string>
using namespace std;

void InternationalPhone::SetCountry(string newcountry)
{
	countrycode = newcountry;
}

void InternationalPhone::Print()
{
	Phone::Print();
	cout << endl << "Country: " << countrycode;
}