#include<iostream>
#include<string>
#include<vector> // vector �����̳� ���
using namespace std;

/*
	vector�� Ȱ���� ���� ���� ����
*/

class BankAccount {
private:
	int accountNumber; 
	string owner;
	int balance;

public:
	// ������ : �ʱ�ȭ ���
	BankAccount(int accountNumber, string owner, int balance) :
		accountNumber(accountNumber), owner(owner), balance(balance) {}

	void displayInfo();				// ��������
	void deposit(int amount);		// �Ա�
	void withdraw(int amount);		// ���

};

void BankAccount::displayInfo() {
	cout << "���� ����\n";
	cout << "���� ��ȣ: " << accountNumber << endl;
	cout << "���� ��: " << owner << endl;
	cout << "�ܾ�: " << balance << "��" << endl;
}

void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;
		cout << amount << "���� �Ա� �Ǿ����ϴ�. ���� �ܾ�: " <<
			balance << "��\n";
	}
}

void BankAccount::withdraw(int amount) {
	if (amount < 0 || amount > balance) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance -= amount;
		cout << amount << "���� ��� �Ǿ����ϴ�. ���� �ܾ�: " <<
			balance << "��\n";
	}
}

int main()
{
	// ���� ���¸� ������ ���� �����̳� ����
	vector<BankAccount> accounts;

	// ���� ����
	accounts.push_back(BankAccount(1000, "�̿���", 10000));
	accounts.push_back(BankAccount(1001, "������", 50000));
	accounts.push_back(BankAccount(1002, "�Ѱ�", 20000));

	// ù��° ���� ����
	//accounts[0].displayInfo();

	// �Ա�,���
	accounts[0].deposit(15000);	
	accounts[1].withdraw(20000);
	

	// ��ü ���� ����
	/*for (int i = 0; i < accounts.size();i++) {
		accounts[i].displayInfo();
		cout << "=======================\n";
	}*/

	// Ŭ���� �����̸� : ��ü�̸�
	for (BankAccount account : accounts) {
		account.displayInfo();
		cout << "=======================\n";
	}

	return 0;
}