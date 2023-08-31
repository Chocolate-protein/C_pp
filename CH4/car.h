#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	int speed;
	int grear;
	string color;

	int getSpeed();
	void setSpeed(int s);
};