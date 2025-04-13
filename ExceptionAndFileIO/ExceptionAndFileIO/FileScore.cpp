//#include<iostream>
//#include<fstream>  //file 입출력시 포함
//#include<string>
//using namespace std;
//
///*
//	성적 파일 만들기
//*/
//
//int main()
//{
//	ofstream out("score.txt");
//	if (!out) {
//		cerr << "Error: 파일을 열 수 없습니다\n";
//		return -1;
//	}
//
//	string name;
//	int eng, math;
//
//	cout << "이름 입력: ";
//	cin >> name;
//	cout << "영어점수 입력: ";
//	cin >> eng;
//	cout << "수학점수 입력: ";
//	cin >> math;
//
//	//파일에 쓰기
//	out << name << " " << eng << " " << math << endl;
//
//	//파일 종료
//	out.close();
//	cout << "데이터가 성공적으로 저장되었습니다.\n";
//
//
//
//	return 0;
//}