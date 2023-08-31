/* 구구단(while문) P.79 
# include <iostream>
using namespace std;

int main()
{
	int num;
	int i = 1;

	cout << "구구단 중에서 출력하고 싶은 단을 입력하시오: ";
	cin >> num;

	while (i < 10) {
		int sub = num * i;
		cout << num << " * " << i << " = " << sub << endl;
		i++;
	}

	return 0;
}*/