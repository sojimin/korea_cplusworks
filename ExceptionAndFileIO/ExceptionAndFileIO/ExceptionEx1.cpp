//#include<iostream>
//using namespace std;
//
///*
//	����(����) ó�� : try ~ catch ����
//*/
//
//int main() 
//{
//	// ������ ���꿡�� 0���� ���� �� ����
//	int n1, n2;
//	int quotient, remainder;  //��, ������
//
//	cout << "ù°�� �Է�: ";
//	cin >> n1;
//
//	cout << "��°�� �Է�: ";
//	cin >> n2;
//
//	try {
//		//��� ������ ���
//		if (n2 == 0)
//			/*cout << n1 << "��(��) 0���� ���� �� �����ϴ�.\n";*/
//			throw n1;
//		
//		quotient = n1 / n2;
//		remainder = n1 % n2;
//
//		cout << "��: " << quotient << endl;
//		cout << "������: " << remainder << endl;
//	}
//	catch (int e_n) {
//		//���� ó�� ����
//		cout << n1 << "��(��) 0���� ���� �� �����ϴ�.\n";
//	}
//
//	
//
//	return 0;
//}