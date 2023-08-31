/* for문 : n! p.82
#include <iostream>
using namespace std;

int main()
{
	int fact = 1;
	int num;

	cout << "정수를 입력하시오: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
		fact *= i;

	cout << num << "!은 " << fact << "입니다." << endl;

	return 0;
}*/