#include<iostream>
#include<vector>
using namespace std;
/*
	auto �ڷ���
		- ������ ������ ���� ������ ����ȭ, ���� Ÿ�� ����
*/
inline int square(int x) { return x * x; }
int main()
{
	auto ch = 'k';
	auto n = 2;
	auto* pn = &n;

	cout << ch << endl;
	cout << "n=" << n << ", pn=" << pn << endl;
	
	// �Լ��� ���� Ÿ������ �߷�
	auto value = square(8);
	cout << value << endl;

	vector<int> v = { 1,2,3,4 };

	for (auto it = v.begin(); it != v.end(); it++) {
		// �������� ������(*) - �� ���
		cout << *it << " ";
	}


	return 0;
}