/* ��� ���� �ڵ� ���� p.93
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int ans;
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while(true)
	{
		int x = rand() % 100;
		int y = rand() % 100;
		cout << x << "+" << y << "=";
		cin >> ans;
		if (ans == x + y) {
			cout << "�¾ҽ��ϴ�." << endl;
			break;
		}
		else
			cout << "Ʋ�Ƚ��ϴ�." << endl;

	}

	return 0;
}*/