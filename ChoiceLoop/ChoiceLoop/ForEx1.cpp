#include <iostream>
#include <string>
using namespace std;

/*
	for �ݺ���
	for(�ʱⰪ; ���ᰪ; ������)
	{
		���๮;
	}

*/

int main()
{
	// 1 ~ 10���� ���
	for (int n = 1; n <= 10; n++)
	{
		cout << n << " ";
	}
	
	cout << "\n==============\n";

	//1 ~ 10���� �հ�
	int sum = 0;
	for (int n = 1; n <= 10; n++)
	{
		sum += n;
		cout << "n=" << n << ",sum = " << sum << endl;
	}

	return 0;
}