//#include<iostream>
//using namespace std;
//
///*
//	������(polymorphism) - ��ü Ÿ��(�ڷ���)�� �������� ���·� �����ȴ�
//*/
//
//class Animal {
//public:
//	void breathe() {
//		cout << "������ ���� ���ϴ�.\n";
//	}
//
//	virtual void cry() {}  //����(�߻�)�Լ� - ���� ������ ����, ��ӹ��� Ŭ�������� ������ �����ؾ���
//};
//
//class Cat : public Animal {
//public:
//	void cry() {
//		cout << "����̴� �߿�~\n";
//	}
//};
//
//class Dog : public Animal {
//public:
//	void cry() {
//		cout << "�������� �۸�~\n";
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
//	// ���� ��ü ���� - ������ ���
//	// ���α׷� ���� �߿� �����ǰ� ��� �� �Ҹ��
//	// �θ�Ÿ�� = �ڽ�Ÿ��(�ڵ�����ȯ)
//	Animal* cat = new Cat;
//	Animal* dog = new Dog;
//	Cat* cat2 = new Cat;  // �ڽ�Ÿ������ ��ü ����
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