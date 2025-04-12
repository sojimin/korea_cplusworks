#include<iostream>
#include<string>
using namespace std;

//Point 구조체 생성 - public(기본이 접근 가능)
struct Point {
	int x, y;
	// 기본 생성자
	Point() {}

	// 생성자 : 초기화 목록
	Point(int x, int y) : x(x), y(y){}
};

Point inputPoint() {
	Point p; //기본 생성자로 객체 생성
	cout << "좌표를 입력해주세요(x,y): ";
	cin >> p.x >> p.y;
	return p; //반환시 복사됨
}

void printPoint(Point& p, const char* str = "Input Point") {
	cout << str << "=(" << p.x << ", " << p.y << ")\n";
}

int main()
{
	// 참조 연산자 활용
	//int n = 1;
	//int& x = n;  // 참조 변수 x 선언
	//int& y = n;

	//cout << "x = " << x + 1 << endl;
	//cout << "y = " << y + 1 << endl;

	Point p1;
	p1 = inputPoint();

	printPoint(p1, "입력 좌표");




}