#include<iostream>
#include <ctime>
#pragma warning(disable:4996)

using namespace std;
int address()
{
	int number = 10;
	int *ip;
	ip = &number;
	int* temp;
	temp = new int;
	*temp = number;


	cout << "��ֵΪ��" <<number << endl;
	cout << "��ַΪ��" << ip << endl;
	cout << "ָ���еĵ�ַ��Ӧ��ֵ��" << *ip << endl;
	cout << "ָ�����" << *temp << endl;

	return 0;
}

int quote()
{
	int i;
	double d;

	int& r = i;
	double& s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;
	return 0;
}

int getTime()
{
	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	time_t now = time(0);

	// �� now ת��Ϊ�ַ�����ʽ
	//char* dt = ctime(&now);
	char* dt;
	dt = ctime(&now);

	cout << "�������ں�ʱ�䣺" << dt << endl;
	return 0;
}