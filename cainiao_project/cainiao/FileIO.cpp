#include<iostream>
#include<fstream>
using namespace std;

int FileIO()
{
	char data[50];

	ofstream outfile;
	outfile.open("test.txt");
	//输入用户名称
	cout << "\n请输入用户名称:" << endl;
	cin.getline(data, 50);
	outfile << data << endl;
	//输入用户密码
	cout << "请输入用户密码:" << endl;
	cin >> data;
	cin.ignore();
	outfile << data << endl;
	//关闭流
	outfile.close();

	//读取数据信息
	ifstream input;
	input.open("test.txt");
	//读取数据
	cout << "\n读取数据为：" << endl;
	input >> data;
	cout << data << endl;
	//读取数据
	cout << "再去读取数据为：" << endl;
	input >> data;
	cout << data << endl;
	return 0;
}
