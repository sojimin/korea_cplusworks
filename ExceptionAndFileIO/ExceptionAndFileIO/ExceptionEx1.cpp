//#include<iostream>
//using namespace std;
//
///*
//	예외(오류) 처리 : try ~ catch 구문
//*/
//
//int main() 
//{
//	// 나누기 연산에서 0으로 나눌 수 없음
//	int n1, n2;
//	int quotient, remainder;  //몫, 나머지
//
//	cout << "첫째수 입력: ";
//	cin >> n1;
//
//	cout << "둘째수 입력: ";
//	cin >> n2;
//
//	try {
//		//몫과 나머지 계산
//		if (n2 == 0)
//			/*cout << n1 << "는(은) 0으로 나눌 수 없습니다.\n";*/
//			throw n1;
//		
//		quotient = n1 / n2;
//		remainder = n1 % n2;
//
//		cout << "몫: " << quotient << endl;
//		cout << "나머지: " << remainder << endl;
//	}
//	catch (int e_n) {
//		//에러 처리 내용
//		cout << n1 << "는(은) 0으로 나눌 수 없습니다.\n";
//	}
//
//	
//
//	return 0;
//}