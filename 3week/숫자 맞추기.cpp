/* ���� ���߱� p.88-89

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;

	do {
		cout << "������ �����Ͽ� ���ÿ�: ";
		cin >> guess;
		tries++;

		if (guess > answer) 
			cout << "������ ������ �����ϴ�.\n";
		
		if (guess < answer)
			cout << "������ ������ �����ϴ�.\n";
	
	} while (guess != answer);

	cout << "�����մϴ�. �õ� Ƚ��=" << tries << endl;

	return 0;
}*/