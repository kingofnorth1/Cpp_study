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
	Test();				//����* �� & ֮��Ĳ�������
	forLoop();			//1~100���
	feibolaqie();		//쳲���������
	recur(5);			//�ݹ麯��
	tailRecur(5, 1);	//β�ݹ麯��
	cout << fib(10) << endl;	//쳲��������еݹ鷽ʽ
	constant(1000);		//ʱ�临�Ӷ�-������
	linear(10000);		//ʱ�临�Ӷ�-���Խ�
	quadratic(10000);	//ʱ�临�Ӷ�-ƽ����
	exponential(10);	//ʱ�临�Ӷ�-ָ����
	logarithmic(10000);		//ʱ�临�Ӷ�-������
	cout << "���Զ�����ֵ��" << linearLogRecur(10000) << endl;	//ʱ�临�Ӷ�-���Զ�����
	cout << "�׳˽�ֵ��" << factorialRecur(10) << endl;	//ʱ�临�Ӷ�-���Զ�����
}
