//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//
///*
//	map<Ű �ڷ���, �� �ڷ���> ��ü �̸�
//*/
//
//
//int main()
//{
//	// �������� ����,���� ������ map �����̳� ����
//	map<string, int> dogs;
//
//	//���� �߰�
//	dogs.insert({ "��Ƽ��", 3 });
//	dogs.insert({ "������", 2 });
//	dogs.insert({ "�ҵ�", 4 });
//	dogs.insert({ "������", 5 });  // �ߺ� �Ұ��� ���� �ȵ�
//
//
//	//map�� ũ��
//	cout << dogs.size() << endl;
//
//	//'������' �˻�
//	cout << "������ " << dogs["������"] << "��" << endl;
//
//	//'�ҵ�' ����
//	dogs.erase("�ҵ�");
//
//	//��ü ���
//	for (map<string, int>::iterator it = dogs.begin(); it != dogs.end();it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//
//	cout << "---------------------\n";
//
//	//��ü�� ��ü�ϴ� ���� �ڷ���(�⺻�ڷ���, Ŭ������ �ڷ���, �����̳�)
//	for (auto it = dogs.begin(); it != dogs.end();it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	return 0;
//}