//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//	카드번호 자동 발급 프로그램
//*/
//class Card {
//private:
//	string name;	// 고객 이름
//	int cardNumber;	// 카드 번호
//	static int serialNum; // 기준 번호(정적 변수)
//
//public:
//	// 매개변수가 있는 생성자
//	/*Card(string name) {
//		serialNum++;
//		this->name = name;
//		cardNumber = serialNum;
//		
//	}*/
//
//	// 생성자 : 초기화 목록
//	Card(string name) : name(name), cardNumber(++serialNum) {}
//
//	string getName() {
//		return name;
//	}
//
//	int getCardNumber() { return cardNumber; }
//};
//
//int Card::serialNum = 1000; // 전역 변수
//
//int main()
//{
//	Card card1("신유빈"); // 객체(인스턴스) 생성
//	Card card2("이정후");
//	Card card3("소지민");
//	cout << "고객이름: " << card1.getName() << endl;
//	cout << "카드번호: " << card1.getCardNumber() << endl;
//	cout << "-----------------------------------\n";
//	cout << "고객이름: " << card2.getName() << endl;
//	cout << "카드번호: " << card2.getCardNumber() << endl;
//	cout << "-----------------------------------\n";
//	cout << "고객이름: " << card3.getName() << endl;
//	cout << "카드번호: " << card3.getCardNumber() << endl;
//
//
//
//	return 0;
//}