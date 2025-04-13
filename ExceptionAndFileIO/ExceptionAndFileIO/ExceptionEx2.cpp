//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//	예외(오류) 처리 : try ~ catch 구문
//	문자열을 정수로 변환하는 프로그램
//*/
//int stringToInt(const char x[]) { //매개변수로 문자열(배열)이 입력
//	int sum = 0;
//	int len = strlen(x);
//	for (int i = 0; i < len; i++) {
//		if (x[i] > '0' && x[i] < '9')
//			sum = sum*10 + x[i] - '0';
//		else
//			throw x;  //오류를 catch() 인자로 보냄
//	}
//	/*
//		12가 입력된 경우
//		1일때 sum = 1
//		2일때 sum = 10 + 2 = 12
//	*/
//	return sum;  //호출한 쪽으로 반환
//}
//
//int main()
//{
//
//	int n;
//
//	try {
//		/*n = stringToInt("12");
//		cout << "12는 정수 " << n << "으로 변환됨\n";*/
//
//		n = stringToInt("12");
//		cout << "\"12\"는 정수 " << n << "으로 변환됨\n";
//	}
//	catch (const char* str) {
//		// const(상수키워드) - 수정할 수 없음
//		// 배열은 문자열 포인터로 변환됨(시작주소 가리킴)
//		cout << str << "처리에서 예외 발생!\n";
//	}
//
//	return 0;
//}

//char s[] = "apple";
//cout << strlen(s) << endl;  //문자열의 길이

//int x = '0';
//int y = '1';

//cout << x << endl;
//cout << y << endl;
//cout << 1 - 0 << endl;
//cout << '1' - '0' << endl;
