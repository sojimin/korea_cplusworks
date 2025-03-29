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

	cout << "===값에 의한 호출 ===\n";
	callByVal(n);
	cout << "n = " << n << endl;

	cout << "===주소에 의한 호출 ===\n";
	callByRef(&n);
	cout << "n = " << n << endl;



	return 0;
}