/* ������(while��) P.79 
# include <iostream>
using namespace std;

int main()
{
	int num;
	int i = 1;

	cout << "������ �߿��� ����ϰ� ���� ���� �Է��Ͻÿ�: ";
	cin >> num;

	while (i < 10) {
		int sub = num * i;
		cout << num << " * " << i << " = " << sub << endl;
		i++;
	}

	return 0;
}*/