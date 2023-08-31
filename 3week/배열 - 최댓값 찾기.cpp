/* 최대값 찾기 p.103 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int list[10];
	int max;

	for (int i = 0; i < 10; i++) {
		list[i] = rand() % 100 + 1;
		cout << list[i] << " ";
	}

	cout << endl;

	max = list[0];
	for (int j = 1; j < 10; j++) {
		if (list[j] > max)
			max = list[j];
		else
			continue;
	}

	cout << "최대값=" << max << endl;

	return 0;
}*/