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
	cout << "地址：" << num << endl;
	*num = 20;
}

int Test() {
	int num = 1;
	setNumber(num);
	cout << "值为：" << num << endl;

	setAddress(&num);
	cout << "地址值为：" << num << endl;
	return 0;
}