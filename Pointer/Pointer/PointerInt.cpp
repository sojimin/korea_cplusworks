//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// ������ ���� ����� �ʱ�ȭ
//	int n = 10;
//
//	cout << n << endl;
//	cout << &n << endl;
//
//	// ������ ������ ����� �ʱ�ȭ - ���� ����(���� �޸�)
//	int* pn = &n;
//
//	cout << pn << endl; // ���� n�� �ּҰ�
//	cout << *pn << endl; // ���� n�� ����Ŵ(������)
//
//
//	//������ ����
//	*pn = *pn + 10;
//	cout << *pn << endl;
//
//	//������ ������ ptr ����
//	int num = 1;
//	int* ptr;
//	ptr = &num;
//
//	//1�� 100���� ����
//	*ptr = 100;
//	cout << *ptr << endl;
//
//
//	return 0;
//}