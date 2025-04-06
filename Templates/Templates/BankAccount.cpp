#include<iostream>
#include<string>
#include<vector> // vector 컨테이너 사용
using namespace std;

/*
	vector를 활용한 은행 계좌 관리
*/

class BankAccount {
private:
	int accountNumber; 
	string owner;
	int balance;

public:
	// 생성자 : 초기화 목록
	BankAccount(int accountNumber, string owner, int balance) :
		accountNumber(accountNumber), owner(owner), balance(balance) {}

	void displayInfo();				// 계좌정보
	void deposit(int amount);		// 입금
	void withdraw(int amount);		// 출금

};

void BankAccount::displayInfo() {
	cout << "계좌 정보\n";
	cout << "계좌 번호: " << accountNumber << endl;
	cout << "계좌 주: " << owner << endl;
	cout << "잔액: " << balance << "원" << endl;
}

void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 입금 되었습니다. 현재 잔액: " <<
			balance << "원\n";
	}
}

void BankAccount::withdraw(int amount) {
	if (amount < 0 || amount > balance) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance -= amount;
		cout << amount << "원이 출금 되었습니다. 현재 잔액: " <<
			balance << "원\n";
	}
}

int main()
{
	// 은행 계좌를 저장할 벡터 컨테이너 생성
	vector<BankAccount> accounts;

	// 계좌 생성
	accounts.push_back(BankAccount(1000, "이우주", 10000));
	accounts.push_back(BankAccount(1001, "정은하", 50000));
	accounts.push_back(BankAccount(1002, "한강", 20000));

	// 첫번째 계좌 정보
	//accounts[0].displayInfo();

	// 입금,출금
	accounts[0].deposit(15000);	
	accounts[1].withdraw(20000);
	

	// 전체 계좌 정보
	/*for (int i = 0; i < accounts.size();i++) {
		accounts[i].displayInfo();
		cout << "=======================\n";
	}*/

	// 클래스 변수이름 : 객체이름
	for (BankAccount account : accounts) {
		account.displayInfo();
		cout << "=======================\n";
	}

	return 0;
}