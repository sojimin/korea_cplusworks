//#include<iostream>
//#include<string>
//#include<vector> // vector 컨테이너 사용
//using namespace std;
//
///*
//	벡터(vector)는 내부에 배열을 가지고 있음
//	벡터는 순서가 있다(0번이 시작)
//*/
//
//int main()
//{
//	// 여러 개의 문자열을 저장할 벡터 생성
//	vector<string> list;
//	string name; // 이름을 저장할 변수
//
//	// 요소 저장
//	list.push_back("jerry");
//	list.push_back("luna");
//	list.push_back("hangang");
//	list.push_back("elsa");
//
//	// 리스트의 크기
//	cout << list.size() << endl;
//
//	// 첫번째 요소 출력  at() - 위치를 알려주는 함수
//	cout << list[0] << endl;
//	cout << list.at(0) << endl;
//
//	// 전체 출력
//	/*for (int i = 0; i < list.size(); i++) {
//		cout << list[i] << endl;
//	}*/
//
//	//최대값 계산
//	name = list.at(0); // 최대값으로 설정
//	for (int i = 0; i < list.size(); i++) {
//		if (list[i] > name)
//			name = list[i];
//	}
//
//	cout << "사전에서 가장 뒤에 나오는 이름: " << name << endl;
//
//
//
//	return 0;
//}