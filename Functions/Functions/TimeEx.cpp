//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<ctime>  // �ð� ���� �Լ� ���
//#include<thread> // sleep_for()�Լ� ����ϱ� ���� ���̺귯��
//using namespace std;
//
///*
//	�ð� ���� ���� �Լ�
//*/
//
//int main()
//{
//	// �ð� ǥ�� �ڷ��� - time_t
//	
//	/*
//	time_t now = time(NULL);
//	
//	cout << "1970�� 1�� 1�� ���� ����: " << now << "��" << endl;
//	cout << "1970�� 1�� 1�� ���� ����: " << now / (24*60*60) << "��" << endl;
//	cout << "1970�� 1�� 1�� ���� ����: " << now / (24*60*60) / 365 << "��" << endl;
//
//
//	// ���� �ð� ����
//	time_t start, end;
//
//	time(&start); // ���� �ð�
//	// 0.5�� �������� 1~10 ���
//	for (int i = 1; i <= 10;i++)
//	{
//		cout << i << endl;
//		this_thread::sleep_for(chrono::milliseconds(500));  // 0.5�� ���
//	}
//	time(&end); // ����ð�
//
//	cout << "����ð�: " << (end - start) << "��" << endl;
//	*/
//
//	// ��¥�� �ð� ǥ��
//	time_t ct;
//	struct tm* datetime;	// tm ����ü ������ ���� ����
//
//	// ���� �ð� ��������
//	time(&ct);
//	datetime = localtime(&ct); // localtime()�� ǥ�� ������
//
//	// ��¥ - ��, ��, ��
//	cout << "���� �⵵: " << datetime->tm_year + 1900 << endl;
//	cout << "���� ��: " << datetime->tm_mon + 1 << endl;
//	cout << "���� ��: " << datetime->tm_mday << endl;
//
//	// �ð� - ��, ��, ��
//	cout << "���� ��: " << datetime->tm_hour << endl;
//	cout << "���� ��: " << datetime->tm_min << endl;
//	cout << "���� ��: " << datetime->tm_sec << endl;
//
//	// ���� ��¥
//	cout << "���� ��¥: " << datetime->tm_year + 1900 << "." <<
//		datetime->tm_mon + 1 << "." << datetime->tm_mday << endl;
//
//	return 0;
//}