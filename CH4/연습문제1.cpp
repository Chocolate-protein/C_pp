
#include <iostream>
#include <string>
using namespace std;

/* ��������1 

class Book
{
public:
	string title;
	string author;
	
	void func()
	{
		cout << "å�̸� : " << title << endl;
		cout << "å���� : " << author << endl;
	}
};

int main()
{
	Book b;
	b.title = "��� C++�� ó������!";
	b.author = "õ�α�";

	b.func();

	return 0;
}*/


/* ��������2 

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
	user1.name = "��ö��";
	user1.age = 38;
	user1.salary = 2000000;
	
	cout << "Employee1:" << endl;
	user1.print();

	return 0;
}*/


/* ��������3 

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

	cout << "�غ��� " << t.width << "�̰� ���̰� " << t.height << "�� �ﰢ���� ����: " << t.area << endl;

	return 0;
}*/


/* ��������4 

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
		cout << "�̸�: " << name << endl;
		cout << "RAM: " << RAM << endl;
		cout << "CPU �ӵ�: " << cpu_speed << endl;
	}
};

int main()
{
	Computer obj;

	obj.setComputer("���ǽ���ǻ��", 8, 4.2);
	obj.frint();

	return 0;
}*/