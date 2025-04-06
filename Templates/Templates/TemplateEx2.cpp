//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//	일반화된 자료형 만들기(형 변환)
//*/
//template<typename T>
//T dataSum(T data1, T data2) {
//	return data1 + data2;
//}
//
//
//int main()
//{
//	int n1 = 3, n2 = 4;
//	string str1 = "Good", str2 = " Luck";
//	char ch1[] = "sky", ch2[] = "flower";
//
//	cout << "정수형 데이터 합: " << dataSum(n1, n2) << endl;
//	cout << "문자형 데이터 합: " << dataSum(str1, str2) << endl;
//	cout << "문자형 배열 합: " << dataSum<string>(ch1, ch2) << endl;  // <string> -> 명시적 형변환
//
//
//
//	return 0;
//}