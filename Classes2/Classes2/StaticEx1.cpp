#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
	ī���ȣ �ڵ� �߱� ���α׷�
*/
class Card {
private:
	string name;	// �� �̸�
	int cardNumber;	// ī�� ��ȣ

public:
	Card() {};
	// �Ű������� �ִ� ������
	/*Card(string name, int cardNumber) {
		this->name = name;
		this->cardNumber = cardNumber;
	}*/

	// ������ : �ʱ�ȭ ���
	Card(string name, int cardNumber) : name(name), cardNumber(cardNumber) {}

	string getName() {
		return name;
	}

	int getCardNumber() { return cardNumber; }
};

int main()
{
	/*Card card1("������", 1001); // ��ü(�ν��Ͻ�) ����
	Card card2("������", 1002);
	cout << "���̸�: " << card1.getName() << endl;
	cout << "ī���ȣ: " << card1.getCardNumber() << endl;
	cout << "-----------------------------------\n";
	cout << "���̸�: " << card2.getName() << endl;
	cout << "ī���ȣ: " << card2.getCardNumber() << endl;*/

	//��ü �迭 ����
	/*Card cards[3] = {
		Card("������", 1001),
		Card("������", 1002),
		Card("�Ѱ�", 1003)
	};

	for(int i = 0; i < size(cards); i++) {
		cout << "���̸�: " << cards[i].getName() << endl;
		cout << "ī���ȣ: " << cards[i].getCardNumber() << endl;
		cout << "-----------------------------------\n";

	}*/


	// vector�� ��ü ����
	vector<Card> cards;

	cards.push_back(Card("������", 1001));
	cards.push_back(Card("������", 1002));
	cards.push_back(Card("�Ѱ�", 1003));

	// 1�� �ε����� �ڷ� ���
	cout << cards[1].getName() << endl;
	cout << cards[1].getCardNumber() << endl;
	cout << "-----------------------------------\n";

	// ��ü ���
	for (int i = 0; i < cards.size(); i++) {
		cout << cards[i].getName() << endl;
		cout << cards[i].getCardNumber() << endl;
		cout << "-----------------------------------\n";
	}






	return 0;
}