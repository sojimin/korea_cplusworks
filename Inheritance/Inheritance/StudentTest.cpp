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
//	void setName(string name) {
//		this->name = name;
//	}
//	void setAge(int age) {
//		this->age = age;
//	}
//
//	string getName() { return name; }
//	int getAge() { return age; }
//
//};
//
//class Student : public Person {
//private:
//	int studentId;
//public:
//	void setStudentId(int studentId) {
//		this->studentId = studentId;
//	}
//	int getStudentId() { return studentId; }
//};
//
//int main() {
//	Person p1;
//	p1.setName("광개토대왕");
//	p1.setAge(40);
//
//	cout << "이름: " << p1.getName() << endl;
//	cout << "나이: " << p1.getAge() << endl;
//
//	Student s1;
//	s1.setName("장수왕");
//	s1.setAge(97);
//	s1.setStudentId(1000);
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