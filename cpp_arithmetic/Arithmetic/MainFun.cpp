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
	Test();		//测试* 与 & 之间的参数区别
	forLoop();	//1~100相加
	feibolaqie(); //斐波那契数列
	recur(5);	//递归函数
	tailRecur(5, 1);	//尾递归函数
	cout << fib(10) << endl;	//斐波那契数列递归方式
}
