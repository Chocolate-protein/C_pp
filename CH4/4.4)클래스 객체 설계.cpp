/* 4.4) 실습 : 사각형 클래스 표현 P.182 

#include <iostream>
using namespace std;

class Rectangle
{
public:
	int width;
	int height;
	int calcArea()
	{
		return width * height;
	}
};

int main()
{
	Rectangle obj;
	obj.width = 3;
	obj.height = 4;
	cout << "사각형의 넓이: " << obj.calcArea() << endl;

	return 0;

}*/