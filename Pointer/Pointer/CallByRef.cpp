#include <iostream>
using namespace std;

void callByVal(int x)
{
	x++;
}

void callByRef(int* pn)
{
	*pn = *pn + 1;
}

int main()
{
	int n = 10;

	cout << "===���� ���� ȣ�� ===\n";
	callByVal(n);
	cout << "n = " << n << endl;

	cout << "===�ּҿ� ���� ȣ�� ===\n";
	callByRef(&n);
	cout << "n = " << n << endl;



	return 0;
}