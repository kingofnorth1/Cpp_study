#include<iostream>
using namespace std;

void setNumber(int& num) {
	num = 10;
}

void setAddress(int* num) {
	//cout << num << endl;
	//num++;
	cout << "��ַ��" << num << endl;
	*num = 20;
}