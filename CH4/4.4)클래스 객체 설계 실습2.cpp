/* 4.4) �ǽ� : Car Ŭ���� �ۼ� P.186 

#include <iostream>
using namespace std;

class Car
{
public:
	int speed;
	int gear;
	string color;

	int speedUp()
	{
		return speed += 10;
	}
	int speedDown()
	{
		return speed -= 10;
	}
};

int main()
{
	Car myCar;
	myCar.speed = 100;
	myCar.gear = 3;
	myCar.color = "red";

	myCar.speedUp();
	myCar.speedDown();

	return 0;
}*/