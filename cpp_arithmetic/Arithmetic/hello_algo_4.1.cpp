#include<iostream>
using namespace std;

int randomAccess(int* nums, int size) {
	//cout << "   �����ڲ���ַ��" << nums[3] << endl;
	int randomIndex = rand() % size;
	int randomNum = nums[randomIndex];
	return randomNum;
}

int AccessTest() {
	int access[5] = {1,2,3,4,5};
	int* p[5];
	int(* ptr)[5] = &access;
	for (int i = 0; i < 5; i++)
	{
		p[i] = &access[i]; // ��ֵΪ�����ĵ�ַ
	}
	cout << randomAccess(p[0], 5) << endl;
	cout << "����ָ�룺" << ptr << "    ָ�����飺" << *p << endl;
	return 0;
}