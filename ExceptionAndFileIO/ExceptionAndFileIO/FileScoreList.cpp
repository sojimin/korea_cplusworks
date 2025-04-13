#include<iostream>
#include<fstream>  //file ����½� ����
#include<string>
using namespace std;

/*
	���� ���� �����
*/

class Student {
private:
	string name;
	int eng;
	int math;
	double avg;
public:
	//������(setter)
	void setName(string name) {this->name = name;}
	void setEng(int eng) { this->eng = eng; }
	void setMath(int math) { this->math = math; }

	//��� ��� �޼���
	void calcAvg() {
		avg = (double)(eng + math) / 2;
	}

	//������(getter)
	string getName() { return name; }
	int getEng() { return eng; }
	int getMath() { return math; }
	double getAvg() { return avg; }
};

int main()
{
	ofstream out("scorelist.txt");
	Student students[3];

	if (!out) {
		cerr << "Error: ������ �� �� �����ϴ�.\n";
		return 1;
	}
	// �ֿܼ��� �Է�
	for (int i = 0; i < 3; i++) {
		string name;
		int eng, math;

		cout << i + 1 << "��° �л��� �̸�: ";
		cin >> name;

		students[i].setName(name);

		cout << "�������� �Է�: ";
		cin >> eng;
		students[i].setEng(eng);

		cout << "�������� �Է�: ";
		cin >> math;
		students[i].setMath(math);

		students[i].calcAvg();
	}

	//���� ����
	for (int i = 0;i < 3;i++) {
		out << students[i].getName() << " "
			<< students[i].getEng() << " "
			<< students[i].getMath() << " "
			<< students[i].getAvg() << endl;
	}


	//���� ����
	out.close();
	cout << "�����͸� �����Ͽ����ϴ�.\n";

	system("pause"); // exe ������ ���� ������

	return 0;
}