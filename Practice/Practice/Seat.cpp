#include<iostream>
using namespace std;

int main()
{
	/*
	���尴 ���� ���� �¼� �� ���� ����ϴ� ���α׷�
	*/

	int customer, column, row;

	cout << "���尴 �� �Է�: ";
	cin >> customer;

	cout << "�¼� �� �� �Է�: ";
	cin >> column;

	if ((customer % column) == 0) row = (customer / column);
	else row = (int)(customer / column) + 1;

	cout << row << "���� ���� �ʿ��մϴ�." << endl;
	
	return 0;
}