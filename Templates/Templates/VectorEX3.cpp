//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int> vec;  //�������� ������ �����̳� ����
//
//	//���� �߰�
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//
//	//������ ����(ũ��)
//	cout << "vec�� ũ��: " << vec.size() << endl;
//
//	//��ü ���
//	//������ �ִ� �ڷ����� �� ���
//	for (int i = 0; i < vec.size(); i++) {
//		cout << vec[i] << " ";
//	}
//	cout << endl;
//
//	//������ �ְų� ���� ��� ���� - �ݺ��� ���
//	//iterator ���
//	vector<int>::iterator it = vec.begin();
//
//	//vec�� ����� ���� ���
//	cout << *it << endl;  //vector�� ���� �ּ�
//	cout << *(it + 1) << endl;
//	cout << *(it + 2) << endl;
//
//	//1�� ��ġ�� 20 -> 50���� ����
//	vec[1] = 50;
//
//	//2�� ��ġ�� 30�� ���� - erase()
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		if (*it == 30) {
//			vec.erase(it);
//			break;
//		}
//	}
//
//	cout << "vec�� ��ü ���� ���\n";
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << endl;
//	}
//
//
//	return 0;
//}