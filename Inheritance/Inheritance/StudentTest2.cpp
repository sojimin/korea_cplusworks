//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//	��� - ������ �ִ� Ŭ������ ����ؼ� ���ο� Ŭ���� ���� (�θ�-�ڽ�)
//*/
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	//�Ű������� �ִ� ������
//	Person(string name, int age) : name(name), age(age){}
//
//	//������(getter)
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
//	Person p1("��������",40);
//	
//
//	cout << "�̸�: " << p1.getName() << endl;
//	cout << "����: " << p1.getAge() << endl;
//
//	Student s1(1001,"�����",97);
//
//
//	cout << "�̸�: " << s1.getName() << endl;
//	cout << "����: " << s1.getAge() << endl;
//	cout << "�й�: " << s1.getStudentId() << endl;
//
//
//
//
//	return 0;
//}