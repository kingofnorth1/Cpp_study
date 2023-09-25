#include<iostream>
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
	rect.setWidth(11.2);

	cout << "\n继承的矩形接口为：" << rect.getArea() << endl;

	return 0;
}