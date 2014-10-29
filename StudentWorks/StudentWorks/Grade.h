// Grade.h

class Grade
{
private:
	int id;
	int score;

public:
	Grade();
	Grade(int newid, int newscore);
	void Set(int newid, int newscore);
	void Write() const;
};