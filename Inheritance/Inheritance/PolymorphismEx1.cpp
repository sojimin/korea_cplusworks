//#include<iostream>
//using namespace std;
//
///*
//	다형성(polymorphism) - 객체 타입(자료형)이 여러가지 형태로 구현된다
//*/
//
//class Animal {
//public:
//	void breathe() {
//		cout << "동물이 숨을 쉽니다.\n";
//	}
//
//	virtual void cry() {}  //가상(추상)함수 - 구현 내용이 없고, 상속받을 클래스에서 강제로 구현해야함
//};
//
//class Cat : public Animal {
//public:
//	void cry() {
//		cout << "고양이는 야옹~\n";
//	}
//};
//
//class Dog : public Animal {
//public:
//	void cry() {
//		cout << "강아지는 멍멍~\n";
//	}
//};
//
//int main()
//{
//	/*Cat cat;
//	cat.breathe();
//	cat.cry();
//
//	Dog dog;
//	dog.breathe();
//	dog.cry();*/
//
//	// 동적 객체 생성 - 포인터 사용
//	// 프로그램 실행 중에 생성되고 사용 후 소멸됨
//	// 부모타입 = 자식타입(자동형변환)
//	Animal* cat = new Cat;
//	Animal* dog = new Dog;
//	Cat* cat2 = new Cat;  // 자식타입으로 객체 생성
//
//	cat->breathe();
//	cat->cry();
//
//	dog->breathe();
//	dog->cry();
//
//	
//	cat2->cry();
//
//	delete cat;
//	delete dog;
//
//
//
//	return 0;
//}