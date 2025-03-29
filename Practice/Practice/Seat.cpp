#include<iostream>
using namespace std;

int main()
{
	/*
	입장객 수에 따른 좌석 줄 수를 계산하는 프로그램
	*/

	int customer, column, row;

	cout << "입장객 수 입력: ";
	cin >> customer;

	cout << "좌석 열 수 입력: ";
	cin >> column;

	if ((customer % column) == 0) row = (customer / column);
	else row = (int)(customer / column) + 1;

	cout << row << "개의 줄이 필요합니다." << endl;
	
	return 0;
}