#include<iostream>
//#include<opencv2/opencv.hpp>
//#include<bzlib.h>

using namespace std;
int Test();
int forLoop();
int feibolaqie();
int recur(int n);
int tailRecur(int n,int ref);
int fib(int n);

int main() {
	Test();		//����* �� & ֮��Ĳ�������
	forLoop();	//1~100���
	feibolaqie(); //쳲���������
	recur(5);	//�ݹ麯��
	tailRecur(5, 1);	//β�ݹ麯��
	cout << fib(10) << endl;	//쳲��������еݹ鷽ʽ
}
