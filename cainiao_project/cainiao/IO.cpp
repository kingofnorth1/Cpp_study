#include<iostream>
using namespace std;
void printBook(struct Books book);
void printBookAddress(struct Books *book);

int inputOutput()
{
	char name[50];
	char str[] = "shuru...";

	cout << "����������Ҫ��ֵ��" << endl;
	cin >> name;
	cout << "���������ǣ�" << name << endl;
	cerr << str << endl;
	clog << str << endl;
	return 0;
}

struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

int bookOutput()
{
	Books Book1;

	strcpy_s(Book1.title, "C++ �̳�");
	strcpy_s(Book1.author, "Runoob");
	strcpy_s(Book1.subject, "�������");
	Book1.book_id = 12345;

	//���book��Ϣ
	printBook(Book1);
	// ͨ���� Book1 �ĵ�ַ����� Book1 ��Ϣ
	printBookAddress(&Book1);
	return 0;
}

void printBook(struct Books book)
{
	cout << "����� : " << book.title << endl;
	cout << "������ : " << book.author << endl;
	cout << "����Ŀ : " << book.subject << endl;
	cout << "�� ID : " << book.book_id << endl;
	cout << "\n" << endl;
}

// �ú����Խṹָ����Ϊ����
void printBookAddress(struct Books* book)
{
	cout << "�����  : " << book->title << endl;
	cout << "������ : " << book->author << endl;
	cout << "����Ŀ : " << book->subject << endl;
	cout << "�� ID : " << book->book_id << endl;
}