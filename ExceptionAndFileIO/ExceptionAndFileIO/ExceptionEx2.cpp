//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//	����(����) ó�� : try ~ catch ����
//	���ڿ��� ������ ��ȯ�ϴ� ���α׷�
//*/
//int stringToInt(const char x[]) { //�Ű������� ���ڿ�(�迭)�� �Է�
//	int sum = 0;
//	int len = strlen(x);
//	for (int i = 0; i < len; i++) {
//		if (x[i] > '0' && x[i] < '9')
//			sum = sum*10 + x[i] - '0';
//		else
//			throw x;  //������ catch() ���ڷ� ����
//	}
//	/*
//		12�� �Էµ� ���
//		1�϶� sum = 1
//		2�϶� sum = 10 + 2 = 12
//	*/
//	return sum;  //ȣ���� ������ ��ȯ
//}
//
//int main()
//{
//
//	int n;
//
//	try {
//		/*n = stringToInt("12");
//		cout << "12�� ���� " << n << "���� ��ȯ��\n";*/
//
//		n = stringToInt("12");
//		cout << "\"12\"�� ���� " << n << "���� ��ȯ��\n";
//	}
//	catch (const char* str) {
//		// const(���Ű����) - ������ �� ����
//		// �迭�� ���ڿ� �����ͷ� ��ȯ��(�����ּ� ����Ŵ)
//		cout << str << "ó������ ���� �߻�!\n";
//	}
//
//	return 0;
//}

//char s[] = "apple";
//cout << strlen(s) << endl;  //���ڿ��� ����

//int x = '0';
//int y = '1';

//cout << x << endl;
//cout << y << endl;
//cout << 1 - 0 << endl;
//cout << '1' - '0' << endl;
