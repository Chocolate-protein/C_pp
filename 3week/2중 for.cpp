/* 2중 for문 : 구구단 

#include <iostream>
using namespace std;

int main()
{
	for (int dan = 2; dan <= 9; dan++)
	{
		cout << "--- " << dan << "단 ---" << endl;

		for (int i = 1; i <= 9; i++)
		{
			cout << dan << " * " << i << " = " << dan * i << endl;
		}
		cout << endl;
	}

	return 0;
}*/