#include<iostream>
#include<fstream>
using namespace std;

int FileIO()
{
	char data[50];

	ofstream outfile;
	outfile.open("test.txt");
	//�����û�����
	cout << "\n�������û�����:" << endl;
	cin.getline(data, 50);
	outfile << data << endl;
	//�����û�����
	cout << "�������û�����:" << endl;
	cin >> data;
	cin.ignore();
	outfile << data << endl;
	//�ر���
	outfile.close();

	//��ȡ������Ϣ
	ifstream input;
	input.open("test.txt");
	//��ȡ����
	cout << "\n��ȡ����Ϊ��" << endl;
	input >> data;
	cout << data << endl;
	//��ȡ����
	cout << "��ȥ��ȡ����Ϊ��" << endl;
	input >> data;
	cout << data << endl;
	return 0;
}
