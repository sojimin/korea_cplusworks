//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//
///*
//	map<키 자료형, 값 자료형> 객체 이름
//*/
//
//
//int main()
//{
//	// 강아지의 종류,나이 저장할 map 컨테이너 생성
//	map<string, int> dogs;
//
//	//원소 추가
//	dogs.insert({ "말티즈", 3 });
//	dogs.insert({ "진돗개", 2 });
//	dogs.insert({ "불독", 4 });
//	dogs.insert({ "진돗개", 5 });  // 중복 불가로 저장 안됨
//
//
//	//map의 크기
//	cout << dogs.size() << endl;
//
//	//'진돗개' 검색
//	cout << "진돗개 " << dogs["진돗개"] << "살" << endl;
//
//	//'불독' 삭제
//	dogs.erase("불독");
//
//	//전체 출력
//	for (map<string, int>::iterator it = dogs.begin(); it != dogs.end();it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//
//	cout << "---------------------\n";
//
//	//객체를 대체하는 통합 자료형(기본자료형, 클래스의 자료형, 컨테이너)
//	for (auto it = dogs.begin(); it != dogs.end();it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	return 0;
//}