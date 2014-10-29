// phone.h

using namespace std;

class Phone
{
private:
	int areacode;
	int phonenumber;
public:
	void SetArea(int newarea);
	void SetNumber(int newnumber);
	void Print();
};