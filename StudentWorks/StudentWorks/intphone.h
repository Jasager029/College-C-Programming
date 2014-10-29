// intphone.h

#include "phone.h"
#include <string>
using namespace std;

class InternationalPhone : public Phone
{
public:
	void SetCountry(string newcountry);
	void Print();
private:
	string countrycode;
};