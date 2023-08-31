/* EXERCISE 1 : P.244

#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
	
public:
	Point(int _x, int _y);
	~Point();
};

Point::Point(int _x = 0, int _y = 0) : x(_x), y(_y)
{
}

Point::~Point()
{
	cout << "¼Ò¸êÀÚ È£Ãâ" << endl;
}

int main()
{
	Point p(100, 200);
	return 0;
} */