//#include<iostream>
//#include<string>
//#include<vector> // vector �����̳� ���
//using namespace std;
//
///*
//	����(vector)�� ���ο� �迭�� ������ ����
//	���ʹ� ������ �ִ�(0���� ����)
//*/
//
//int main()
//{
//	// ���� ���� ���ڿ��� ������ ���� ����
//	vector<string> list;
//	string name; // �̸��� ������ ����
//
//	// ��� ����
//	list.push_back("jerry");
//	list.push_back("luna");
//	list.push_back("hangang");
//	list.push_back("elsa");
//
//	// ����Ʈ�� ũ��
//	cout << list.size() << endl;
//
//	// ù��° ��� ���  at() - ��ġ�� �˷��ִ� �Լ�
//	cout << list[0] << endl;
//	cout << list.at(0) << endl;
//
//	// ��ü ���
//	/*for (int i = 0; i < list.size(); i++) {
//		cout << list[i] << endl;
//	}*/
//
//	//�ִ밪 ���
//	name = list.at(0); // �ִ밪���� ����
//	for (int i = 0; i < list.size(); i++) {
//		if (list[i] > name)
//			name = list[i];
//	}
//
//	cout << "�������� ���� �ڿ� ������ �̸�: " << name << endl;
//
//
//
//	return 0;
//}