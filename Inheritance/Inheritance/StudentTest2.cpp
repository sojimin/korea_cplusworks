//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//	상속 - 기존에 있던 클래스를 사용해서 새로운 클래스 생성 (부모-자식)
//*/
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	//매개변수가 있는 생성자
//	Person(string name, int age) : name(name), age(age){}
//
//	//접근자(getter)
//	string getName() { return name; }
//	int getAge() { return age; }
//
//};
//
//class Student : public Person {
//private:
//	int studentId;
//public:
//	Student(int studentId, string name, int age) : 
//		Person(name, age), studentId(studentId){}
//	int getStudentId() { return studentId; }
//};
//
//int main() {
//	Person p1("광개토대왕",40);
//	
//
//	cout << "이름: " << p1.getName() << endl;
//	cout << "나이: " << p1.getAge() << endl;
//
//	Student s1(1001,"장수왕",97);
//
//
//	cout << "이름: " << s1.getName() << endl;
//	cout << "나이: " << s1.getAge() << endl;
//	cout << "학번: " << s1.getStudentId() << endl;
//
//
//
//
//	return 0;
//}