//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//	ī���ȣ �ڵ� �߱� ���α׷�
//*/
//class Card {
//private:
//	string name;	// �� �̸�
//	int cardNumber;	// ī�� ��ȣ
//	static int serialNum; // ���� ��ȣ(���� ����)
//
//public:
//	// �Ű������� �ִ� ������
//	/*Card(string name) {
//		serialNum++;
//		this->name = name;
//		cardNumber = serialNum;
//		
//	}*/
//
//	// ������ : �ʱ�ȭ ���
//	Card(string name) : name(name), cardNumber(++serialNum) {}
//
//	string getName() {
//		return name;
//	}
//
//	int getCardNumber() { return cardNumber; }
//};
//
//int Card::serialNum = 1000; // ���� ����
//
//int main()
//{
//	Card card1("������"); // ��ü(�ν��Ͻ�) ����
//	Card card2("������");
//	Card card3("������");
//	cout << "���̸�: " << card1.getName() << endl;
//	cout << "ī���ȣ: " << card1.getCardNumber() << endl;
//	cout << "-----------------------------------\n";
//	cout << "���̸�: " << card2.getName() << endl;
//	cout << "ī���ȣ: " << card2.getCardNumber() << endl;
//	cout << "-----------------------------------\n";
//	cout << "���̸�: " << card3.getName() << endl;
//	cout << "ī���ȣ: " << card3.getCardNumber() << endl;
//
//
//
//	return 0;
//}