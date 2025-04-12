#include<iostream>
#include<vector>
using namespace std;
/*
	auto 자료형
		- 복잡한 형식의 변수 선언을 간소화, 변수 타입 결정
*/
inline int square(int x) { return x * x; }
int main()
{
	auto ch = 'k';
	auto n = 2;
	auto* pn = &n;

	cout << ch << endl;
	cout << "n=" << n << ", pn=" << pn << endl;
	
	// 함수의 리턴 타입으로 추론
	auto value = square(8);
	cout << value << endl;

	vector<int> v = { 1,2,3,4 };

	for (auto it = v.begin(); it != v.end(); it++) {
		// 포인터의 역함조(*) - 값 출력
		cout << *it << " ";
	}


	return 0;
}