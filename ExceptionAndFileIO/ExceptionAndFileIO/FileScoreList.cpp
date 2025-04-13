#include<iostream>
#include<fstream>  //file 입출력시 포함
#include<string>
using namespace std;

/*
	성적 파일 만들기
*/

class Student {
private:
	string name;
	int eng;
	int math;
	double avg;
public:
	//설정자(setter)
	void setName(string name) {this->name = name;}
	void setEng(int eng) { this->eng = eng; }
	void setMath(int math) { this->math = math; }

	//평균 계산 메서드
	void calcAvg() {
		avg = (double)(eng + math) / 2;
	}

	//접근자(getter)
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
		cerr << "Error: 파일을 열 수 없습니다.\n";
		return 1;
	}
	// 콘솔에서 입력
	for (int i = 0; i < 3; i++) {
		string name;
		int eng, math;

		cout << i + 1 << "번째 학생의 이름: ";
		cin >> name;

		students[i].setName(name);

		cout << "영어점수 입력: ";
		cin >> eng;
		students[i].setEng(eng);

		cout << "수학점수 입력: ";
		cin >> math;
		students[i].setMath(math);

		students[i].calcAvg();
	}

	//파일 쓰기
	for (int i = 0;i < 3;i++) {
		out << students[i].getName() << " "
			<< students[i].getEng() << " "
			<< students[i].getMath() << " "
			<< students[i].getAvg() << endl;
	}


	//파일 종료
	out.close();
	cout << "데이터를 저장하였습니다.\n";

	system("pause"); // exe 파일을 실행 유지함

	return 0;
}