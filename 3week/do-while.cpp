/* do-while�� p.80 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	do {
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		getline(cin, s);  // �����Է� ����
		                  // space bar, enter �� �ܾ� ����
		cout << "������� �Է�: " << s << endl;

	} while (s != "����");

	return 0;
}*/