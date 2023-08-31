/* 예제풀이 1
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Car
{
private:
	int speed;    // 속도
	int gear;    // 기어
	string color;    // 색상
public:
	int getSpeed();
	void setSpeed(int s);
	int getGear();
	void setGear(int g);
	string getColor();
	void setColor(string c);

	void speedUp();
	void speedDown();
	void init(int s, int g, string c);
	void show();
};

int Car::getSpeed(){
	return speed;
}
void Car::setSpeed(int s){
	speed = s;
}

int Car::getGear(){
	return gear;
}
void Car::setGear(int g){
	gear = g;
}

string Car::getColor(){
	return color;
}
void Car::setColor(string c){
	color = c;
}

void Car::speedUp(){
	speed += 10;
}
void Car::speedDown(){
	speed -= 10;
}

void Car::init(int s, int g, string c)
{
	speed = s;
	gear = g;
	color = c;
}
void Car::show()
{
	cout << "===============" << endl;
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
	cout << "===============" << endl;
}

int main()
{
	srand((unsigned int)time(NULL));
	Car banz, bmw;
	banz.init(rand() % 200, 1, "gray");
	banz.show();

	bmw.init(rand() % 200, 1, "blue");
	bmw.show();

	if (banz.getSpeed() > bmw.getSpeed()) {
		cout << "banz가 승리하였습니다." << endl;
	}
	else if (banz.getSpeed() < bmw.getSpeed()) {
		cout << "bmw가 승리하였습니다." << endl;
	}
	else {
		cout << "무승부입니다." << endl;
	}

	return 0;
}*/

/* 예제풀이 2
#include <iostream>
#include <string>
using namespace std;

class Bankaccount
{
private:
	int accountNumber;   //계좌번호
	string owner;        // 예금주
	int balance;         // 잔액표시
public:
	int getAccountNumber();            // accountNumber 접근자
	void setAccountNumber(int a);      // account Number 설정자
	string getOwner();                 // owner 접근자
	void setOwner(string o);           // owner 설정자
	int getBalance();                  // 
	void setBalance(int b);

	void deposit(int money);
	void withdraw(int money);
	void print();

};

int Bankaccount::getAccountNumber(){
	return accountNumber;
}
void Bankaccount::setAccountNumber(int a){
	accountNumber = a;
}

string Bankaccount::getOwner() {
	return owner;
}
void Bankaccount::setOwner(string o) {
	owner = o;
}

int Bankaccount::getBalance() {
	return balance;
}
void Bankaccount::setBalance(int b) {
	balance = b;
}

void Bankaccount::deposit(int money) {
	balance += money;
}
void Bankaccount::withdraw(int money) {
	balance -= money;
	/*  if (balance < 0)
		balance = 0;  */
}
void Bankaccount::print() {
	cout << "계좌번호 : " << accountNumber << endl;
	cout << "예금주 : " << owner << endl;
	/* if (balance < 0)
		cout << "잔액이 부족합니다." << endl;
	else */
	cout << "잔액 : " << balance << endl;
	cout << "---------------------" << endl;
}

int main()
{
	Bankaccount account;
	account.setAccountNumber(351001545);
	account.setOwner("김영기");
	account.setBalance(0);
	account.print();
	account.deposit(100000);
	account.print();
	account.withdraw(18500);
	account.print();
	account.withdraw(900000);
	account.print();

	return 0;
}*/