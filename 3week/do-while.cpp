/* do-while문 p.80 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	do {
		cout << "문자열을 입력하시오: ";
		getline(cin, s);  // 문장입력 가능
		                  // space bar, enter 로 단어 구분
		cout << "사용자의 입력: " << s << endl;

	} while (s != "종료");

	return 0;
}*/