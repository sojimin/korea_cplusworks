//#include <iostream>
//#include <string>
//using namespace std;
///*
//	static이 포함된 함수
//*/
//
//class Math {
//public:
//	// 절대값을 구하는 함수
//	static int abs(int x) {
//		return (x < 0) ? -x : x;
//	}
//
//	// 두 수중 큰 수 선택
//	static int max(int x, int y) {
//		return (x > y) ? x : y;
//	}
//
//	// 두 수중 작은 수 선택
//	static int min(int x, int y) {
//		return (x > y) ? y : x;
//	}
//
//};
//
//int main()
//{
//	// static이 있는 함수는 접근할 때 클래스 이름으로 직접 접근
//	cout << Math::abs(-4) << endl;
//	cout << Math::max(10,20) << endl;
//	cout << Math::min(10,20) << endl;
//
//
//
//	return 0;
//}