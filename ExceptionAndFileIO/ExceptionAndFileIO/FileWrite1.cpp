//#include<iostream>
//#include<fstream>  //file 입출력시 포함
//using namespace std;
//
///*
//	외부에 파일 쓰기(저장)
//*/
//
//int main()
//{
//	ofstream fout("data.txt"); //파일쓰기 객체 생성
//	if (fout.fail()) {
//		cerr << "파일을 열 수 없습니다.\n";
//		return 1; // 오류값 반환
//	}
//
//	//파일 쓰기
//	int x = 1, y = 2;
//	fout << "Good Job!\n";
//	fout << x << " " << y << endl;
//
//	//파일 종료
//	fout.close();
//
//	cout << "파일이 저장되었습니다.\n";
//
//	return 0;
//}