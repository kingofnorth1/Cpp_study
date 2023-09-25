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


	cout << "数值为：" <<number << endl;
	cout << "地址为：" << ip << endl;
	cout << "指针中的地址对应的值：" << *ip << endl;
	cout << "指针测试" << *temp << endl;

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
	// 基于当前系统的当前日期/时间
	time_t now = time(0);

	// 把 now 转换为字符串形式
	//char* dt = ctime(&now);
	char* dt;
	dt = ctime(&now);

	cout << "本地日期和时间：" << dt << endl;
	return 0;
}