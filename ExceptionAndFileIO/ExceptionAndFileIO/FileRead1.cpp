//#include<iostream>
//#include<fstream>  //file 입출력시 포함
//#include<string>
//using namespace std;
//
///*
//	외부에 파일 읽기
//*/
//
//int main()
//{
//	ifstream fin("data.txt");
//	if (fin.fail()) {
//		cerr << "파일을 찾을 수 없습니다.\n";
//		return 1;
//	}
//
//	//파일 읽기
//	string str;  //읽은 내용을 저장할 변수
//	//while (!fin.eof()) {
//	//	getline(fin, str);
//	//	cout << str << endl;
//	//}
//	
//	while (getline(fin, str)) {
//		cout << str << endl;
//	}
//
//	//파일 종료
//	fin.close();
//
//	return 0;
//}