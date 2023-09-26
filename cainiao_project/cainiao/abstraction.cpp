#include<iostream>
//#include<pthread.h>

using namespace std;

class Adder
{
	public:
		Adder(int i)
		{
			total = i;
		}
		void addNumber(int i)
		{
			total += i;
		}
		int getNumber()
		{
			return total;
		}
	private:
		int total;
};

int abstraction()
{
	Adder adder(10);
	adder.addNumber(20);

	cout << "\n总计数值为；" << adder.getNumber() << endl;
	return 0;
}

class Shapes
{
public:
	virtual int getArea() = 0;
	void setWidth(int wid)
	{
		width = wid;
	}
	void setHeight(int hei)
	{
		height = hei;
	}
protected:
	int width;
	int height;
};

class Rectangle : public Shapes
{
public:
	int getArea()
	{
		return (width * height);
	}
};

int interface()
{
	Rectangle rect;
	rect.setHeight(10);
	rect.setWidth(11);

	cout << "\n继承的矩形接口为：" << rect.getArea() << endl;

	return 0;
}

// 线程的运行函数
void* say_hello(void* args)
{
	cout << "Hello Runoob！" << endl;
	return 0;
}

//#define NUM_THREADS 5
//int threadFun() {
//	// 定义线程的 id 变量，多个变量使用数组
//	pthread_t tids[NUM_THREADS];
//	for (int i = 0; i < NUM_THREADS; ++i)
//	{
//		//参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
//		int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
//		if (ret != 0)
//		{
//			cout << "pthread_create error: error_code=" << ret << endl;
//		}
//	}
//	//等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
//	pthread_exit(NULL);
//	return 0;
//}
