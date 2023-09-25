#include<iostream>
using namespace std;
void printBook(struct Books book);
void printBookAddress(struct Books *book);

int inputOutput()
{
	char name[50];
	char str[] = "shuru...";

	cout << "请您输入需要的值：" << endl;
	cin >> name;
	cout << "您的输入是：" << name << endl;
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

	strcpy_s(Book1.title, "C++ 教程");
	strcpy_s(Book1.author, "Runoob");
	strcpy_s(Book1.subject, "编程语言");
	Book1.book_id = 12345;

	//输出book信息
	printBook(Book1);
	// 通过传 Book1 的地址来输出 Book1 信息
	printBookAddress(&Book1);
	return 0;
}

void printBook(struct Books book)
{
	cout << "书标题 : " << book.title << endl;
	cout << "书作者 : " << book.author << endl;
	cout << "书类目 : " << book.subject << endl;
	cout << "书 ID : " << book.book_id << endl;
	cout << "\n" << endl;
}

// 该函数以结构指针作为参数
void printBookAddress(struct Books* book)
{
	cout << "书标题  : " << book->title << endl;
	cout << "书作者 : " << book->author << endl;
	cout << "书类目 : " << book->subject << endl;
	cout << "书 ID : " << book->book_id << endl;
}