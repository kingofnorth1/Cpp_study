#include<iostream>
using namespace std;

void setNumber(int& num);
void setAddress(int* num);

int main() {
	int num = 1;
	setNumber(num);
	cout << "值为：" << num << endl;

	setAddress(&num);
	cout << "地址值为：" << num << endl;
	return 0;
}
