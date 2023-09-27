#include<iostream>
//#include<opencv2/opencv.hpp>
//#include<bzlib.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;
int Test();
int forLoop();
int feibolaqie();
int recur(int n);
int tailRecur(int n,int ref);
int fib(int n);
int algoArithmetic(int n);
void algoArithmetic_A(int n);
void algoArithmetic_B(int n);
void algoArithmetic_C(int n);
void constant(int n);
void linear(int n);
void quadratic(int n);
void exponential(int n);
void logarithmic(int n);
int linearLogRecur(int n);
int factorialRecur(int n);

int main() {
	Test();				//测试* 与 & 之间的参数区别
	forLoop();			//1~100相加
	feibolaqie();		//斐波那契数列
	recur(5);			//递归函数
	tailRecur(5, 1);	//尾递归函数
	cout << fib(10) << endl;	//斐波那契数列递归方式
	constant(1000);		//时间复杂度-常数阶
	linear(10000);		//时间复杂度-线性阶
	quadratic(10000);	//时间复杂度-平方阶
	exponential(10);	//时间复杂度-指数阶
	logarithmic(10000);		//时间复杂度-对数阶
	cout << "线性对数阶值：" << linearLogRecur(10000) << endl;	//时间复杂度-线性对数阶
	cout << "阶乘阶值：" << factorialRecur(10) << endl;	//时间复杂度-线性对数阶
}
