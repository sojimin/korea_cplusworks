#include<iostream>
using namespace std;

int main()
{
	// ���ڿ� �迭 ����
	/*string cart = "���";

	cout << cart << endl;*/


	string carts[] = { "���", "��", "ȭ����", "����" };

	// �迭�� ũ��
	cout << size(carts) << endl;

	// Ư�� ��� �˻�
	cout << carts[2] << endl;

	//��ü ��� �˻�
	for (int i = 0; i < size(carts);i++)
	{
		cout << carts[i] << " ";
	}


	return 0;
}