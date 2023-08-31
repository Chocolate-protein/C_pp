/* 산수 문제 자동 출제 p.93
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int ans;
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while(true)
	{
		int x = rand() % 100;
		int y = rand() % 100;
		cout << x << "+" << y << "=";
		cin >> ans;
		if (ans == x + y) {
			cout << "맞았습니다." << endl;
			break;
		}
		else
			cout << "틀렸습니다." << endl;

	}

	return 0;
}*/