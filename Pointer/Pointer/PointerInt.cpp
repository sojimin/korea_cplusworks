//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 정수형 변수 선언과 초기화
//	int n = 10;
//
//	cout << n << endl;
//	cout << &n << endl;
//
//	// 정수형 포인터 선언과 초기화 - 간접 참조(간접 메모리)
//	int* pn = &n;
//
//	cout << pn << endl; // 변수 n의 주소값
//	cout << *pn << endl; // 변수 n을 가리킴(역참조)
//
//
//	//역참조 연산
//	*pn = *pn + 10;
//	cout << *pn << endl;
//
//	//정수형 포인터 ptr 선언
//	int num = 1;
//	int* ptr;
//	ptr = &num;
//
//	//1을 100으로 변경
//	*ptr = 100;
//	cout << *ptr << endl;
//
//
//	return 0;
//}