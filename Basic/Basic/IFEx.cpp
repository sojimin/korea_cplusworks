# include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "나이를 입력하세요: ";
	cin >> age;


	if (age >= 15)
	{
		cout << "관람가입니다.\n";
	}
	else 
	{
		cout << "관람불가입니다.\n";

	}

	cout << "나이는 " << age << "세 입니다.\n";


	return 0;
}