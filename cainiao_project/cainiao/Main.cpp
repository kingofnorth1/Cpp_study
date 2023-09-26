#include<iostream>
#include<cstring>

using namespace std;
int operators();
int helloWorld();
int randNumber();
int StringFun();
int address();
int quote();
int getTime();
int inputOutput();
int bookOutput();
int ObjectBox();
int jicheng();
int abstraction();
int interface();
int FileIO();
int RamNewDelete();
int Template();
//int threadFun();
int UseVector();

struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

int main()
{
	operators();	//运算符输出
	helloWorld();	//helloWorld输出
	randNumber();	//输出10个随机数
	StringFun();	//String类型输出
	address();		//指针函数
	quote();		//引用&
	getTime();		//获取当前时间
	//inputOutput();	//输入输出流
	bookOutput();
	ObjectBox();	//对象输出
	jicheng();		//类继承
	abstraction();	//数据抽象继承
	interface();	//抽象类实现
	//FileIO();		//读取与写入数据
	//RamNewDelete();	//内存新增与删除
	Template();		//模板类输出
	//threadFun();	//多线程输出
	UseVector();	//vector向量变量存储
}

