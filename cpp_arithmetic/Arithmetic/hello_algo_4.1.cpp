#include<iostream>
using namespace std;

int randomAccess(int* nums, int size) {
	//cout << "   方法内部地址：" << nums[3] << endl;
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
		p[i] = &access[i]; // 赋值为整数的地址
	}
	cout << randomAccess(p[0], 5) << endl;
	cout << "数组指针：" << ptr << "    指针数组：" << *p << endl;
	return 0;
}