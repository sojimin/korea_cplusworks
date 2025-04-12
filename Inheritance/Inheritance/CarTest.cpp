//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//	함수 재정의(overriding) - 부모 클래스의 멤버 함수를 자식 클래스에서 재정의
//*/
//class Car {
//public:
//	void drive() {
//		cout << "차가 달립니다.\n";
//	}
//};
//
//class Taxi : public Car {
//public:
//	void drive() {
//		cout << "택시가 달립니다.\n";
//	}
//};
//
//class SportsCar : public Car {
//public:
//	void drive() {
//		cout << "스포츠카가 달립니다.\n";
//	}
//};
//
//int main() 
//{
//	Car car;
//	car.drive();
//	
//	Taxi taxi;
//	taxi.drive();
//
//	SportsCar sCar;
//	sCar.drive();
//
//	return 0;
//}