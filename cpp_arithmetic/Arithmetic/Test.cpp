#include<iostream>
using namespace std;
void setNumber(int& num);
void setAddress(int* num);

void setNumber(int& num) {
	num = 10;
}

void setAddress(int* num) {
	//cout << num << endl;
	//num++;
	cout << "��ַ��" << num << endl;
	*num = 20;
}

int Test() {
	int num = 1;
	setNumber(num);
	cout << "ֵΪ��" << num << endl;

	setAddress(&num);
	cout << "��ֵַΪ��" << num << endl;
	return 0;
}