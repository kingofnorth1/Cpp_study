#include<iostream>
using namespace std;

void setNumber(int& num);
void setAddress(int* num);

int main() {
	int num = 1;
	setNumber(num);
	cout << "ֵΪ��" << num << endl;

	setAddress(&num);
	cout << "��ֵַΪ��" << num << endl;
	return 0;
}
