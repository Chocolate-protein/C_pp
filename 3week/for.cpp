/* for�� : n! p.82
#include <iostream>
using namespace std;

int main()
{
	int fact = 1;
	int num;

	cout << "������ �Է��Ͻÿ�: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
		fact *= i;

	cout << num << "!�� " << fact << "�Դϴ�." << endl;

	return 0;
}*/