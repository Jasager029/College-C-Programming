//DateType.h
//SPECIFICATION FILE
class DateType
{

private:
	int month;
	int day;
	int year;

public:
	void Set(int newmonth, int newday, int newyear);
	void Nextday();
	void Write() const;
	bool Equal(DateType otherDate) const;
	bool Earlier(DateType otherDate) const;

};