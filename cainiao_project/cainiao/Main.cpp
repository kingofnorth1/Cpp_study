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
	operators();	//��������
	helloWorld();	//helloWorld���
	randNumber();	//���10�������
	StringFun();	//String�������
	address();		//ָ�뺯��
	quote();		//����&
	getTime();		//��ȡ��ǰʱ��
	//inputOutput();	//���������
	bookOutput();
	ObjectBox();	//�������
	jicheng();		//��̳�
	abstraction();	//���ݳ���̳�
	interface();	//������ʵ��
	//FileIO();		//��ȡ��д������
	//RamNewDelete();	//�ڴ�������ɾ��
	Template();		//ģ�������
	//threadFun();	//���߳����
	UseVector();	//vector���������洢
}

