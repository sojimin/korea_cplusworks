#include<iostream>
#include<string>
using namespace std;

//Point ����ü ���� - public(�⺻�� ���� ����)
struct Point {
	int x, y;
	// �⺻ ������
	Point() {}

	// ������ : �ʱ�ȭ ���
	Point(int x, int y) : x(x), y(y){}
};

Point inputPoint() {
	Point p; //�⺻ �����ڷ� ��ü ����
	cout << "��ǥ�� �Է����ּ���(x,y): ";
	cin >> p.x >> p.y;
	return p; //��ȯ�� �����
}

void printPoint(Point& p, const char* str = "Input Point") {
	cout << str << "=(" << p.x << ", " << p.y << ")\n";
}

int main()
{
	// ���� ������ Ȱ��
	//int n = 1;
	//int& x = n;  // ���� ���� x ����
	//int& y = n;

	//cout << "x = " << x + 1 << endl;
	//cout << "y = " << y + 1 << endl;

	Point p1;
	p1 = inputPoint();

	printPoint(p1, "�Է� ��ǥ");




}