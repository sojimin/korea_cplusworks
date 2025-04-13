#include<iostream>
using namespace std;

/*
	���� ��� - �ڽ� Ŭ������ ���� �θ� Ŭ������ ���ÿ� ��ӹ޴� ��
*/

class Character {
public:
	Character() {
		cout << "Character Ŭ���� ������" << endl;
	}
	~Character() {
		cout << "Character Ŭ���� �Ҹ���" << endl;
	}
};

class Monster {
public:
	// ������ : �ʱ�ȭ ���
	Monster() {
		cout << "Monster Ŭ���� ������" << endl;
	}
	~Monster() {
		cout << "Monster Ŭ���� �Ҹ���" << endl;
	}
};

// ���� ���
class MonsterA : public Monster, Character {
private:
	int location[2];

public:
	MonsterA() : MonsterA(0,0) {
		cout << "MosterA Ŭ���� ������" << endl;
		
	}
	// �Ű������� �ִ� ������
	MonsterA(int x, int y) : location{ x,y } {
		cout << "MonsterA Ŭ���� ������(�Ű����� �߰�)" << endl;
	}

	//��ǥ ����ϴ� �Լ�
	void showLocation() {
		cout << "��ġ(" << location[0] << ", " << location[1] << ")" << endl;
	}
};

int main()
{
	MonsterA forestMonster; //�⺻ �����ڷ� ��ü ����
	forestMonster.showLocation();

	MonsterA woodMonster(10,20);  //�Ű� ������ �ִ� ��ü ����
	woodMonster.showLocation();



	return 0;
}