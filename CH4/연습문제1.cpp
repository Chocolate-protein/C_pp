
#include <iostream>
#include <string>
using namespace std;

/* 연습문제1 

class Book
{
public:
	string title;
	string author;
	
	void func()
	{
		cout << "책이름 : " << title << endl;
		cout << "책저자 : " << author << endl;
	}
};

int main()
{
	Book b;
	b.title = "어서와 C++은 처음이지!";
	b.author = "천인국";

	b.func();

	return 0;
}*/


/* 연습문제2 

class Employee
{
public:
	string name;
	int age;
	int salary;

	void print()
	{
		cout << name << endl;
		cout << age << endl;
		cout << salary << endl;
	}
};

int main()
{
	Employee user1;
	user1.name = "김철수";
	user1.age = 38;
	user1.salary = 2000000;
	
	cout << "Employee1:" << endl;
	user1.print();

	return 0;
}*/


/* 연습문제3 

class Triangle
{
public:
	int width;
	int height;
	float area;

	void calcArea()
	{
		area = 0.5 * width * height;
	}
};

int main()
{
	Triangle t;
	t.width = 3;
	t.height = 4;
	t.calcArea();

	cout << "밑변이 " << t.width << "이고 높이가 " << t.height << "인 삼각형의 면적: " << t.area << endl;

	return 0;
}*/


/* 연습문제4 

class Computer
{
public:
	string name;
	int RAM;
	float cpu_speed;

	void setComputer(string n, int r, float c)
	{
		name = n;
		RAM = r;
		cpu_speed = c;
	}
	void frint()
	{
		cout << "이름: " << name << endl;
		cout << "RAM: " << RAM << endl;
		cout << "CPU 속도: " << cpu_speed << endl;
	}
};

int main()
{
	Computer obj;

	obj.setComputer("오피스컴퓨터", 8, 4.2);
	obj.frint();

	return 0;
}*/