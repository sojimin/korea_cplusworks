#include<iostream>
using namespace std;

/*
	다중 상속 - 자식 클래스가 여러 부모 클래스를 동시에 상속받는 것
*/

class Character {
public:
	Character() {
		cout << "Character 클래스 생성자" << endl;
	}
	~Character() {
		cout << "Character 클래스 소멸자" << endl;
	}
};

class Monster {
public:
	// 생성자 : 초기화 목록
	Monster() {
		cout << "Monster 클래스 생성자" << endl;
	}
	~Monster() {
		cout << "Monster 클래스 소멸자" << endl;
	}
};

// 다중 상속
class MonsterA : public Monster, Character {
private:
	int location[2];

public:
	MonsterA() : MonsterA(0,0) {
		cout << "MosterA 클래스 생성자" << endl;
		
	}
	// 매개변수가 있는 생성자
	MonsterA(int x, int y) : location{ x,y } {
		cout << "MonsterA 클래스 생성자(매개변수 추가)" << endl;
	}

	//좌표 출력하는 함수
	void showLocation() {
		cout << "위치(" << location[0] << ", " << location[1] << ")" << endl;
	}
};

int main()
{
	MonsterA forestMonster; //기본 생성자로 객체 생성
	forestMonster.showLocation();

	MonsterA woodMonster(10,20);  //매개 변수가 있는 객체 생성
	woodMonster.showLocation();



	return 0;
}