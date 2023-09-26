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

	cout << "\n�ܼ���ֵΪ��" << adder.getNumber() << endl;
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

	cout << "\n�̳еľ��νӿ�Ϊ��" << rect.getArea() << endl;

	return 0;
}

// �̵߳����к���
void* say_hello(void* args)
{
	cout << "Hello Runoob��" << endl;
	return 0;
}

//#define NUM_THREADS 5
//int threadFun() {
//	// �����̵߳� id �������������ʹ������
//	pthread_t tids[NUM_THREADS];
//	for (int i = 0; i < NUM_THREADS; ++i)
//	{
//		//���������ǣ��������߳�id���̲߳��������õĺ���������ĺ�������
//		int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
//		if (ret != 0)
//		{
//			cout << "pthread_create error: error_code=" << ret << endl;
//		}
//	}
//	//�ȸ����߳��˳��󣬽��̲Ž������������ǿ�ƽ����ˣ��߳̿��ܻ�û��Ӧ������
//	pthread_exit(NULL);
//	return 0;
//}
