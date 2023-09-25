#include<iostream>
using namespace std;

class Box
{
	public:
		double length;
		double height;
		double breadth;
		double get(void);
		void set(double len, double bre, double hei);
};

double Box::get()
{
	return length * height * breadth;
}

void Box::set(double len, double bre, double hei)
{
	length = len;
	breadth = bre;
	height = hei;
}

int ObjectBox()
{
	Box box1;
	box1.length = 10;
	box1.breadth = 20;
	box1.height = 30;

	cout << "box1�����Ϊ��" << box1.get() << endl;
	return 0;
}

class Shape
{
	public:
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

class PaintCost
{
	public:
		int getCost(int i)
		{
			return i * 70;
		}
};

class Rectangle : public Shape, public PaintCost
{
	public:
		int Area()
		{
			return width * height;
		}
};

class Triangle : public Shape, public PaintCost
{
	public:
		int Area()
		{
			return width * height / 2;
		}
};

int jicheng()
{
	Rectangle rect;
	rect.setHeight(10);
	rect.setWidth(11.2);

	Triangle trian;
	trian.setHeight(10);
	trian.setWidth(11.2);

	cout << "�̳еľ���Ϊ��" << rect.Area() << endl;
	cout << "�ܼƻ��Ѷ�Ϊ��" << rect.getCost(rect.Area()) << "\n" << endl;


	cout << "�̳е�������Ϊ��" << trian.Area() << endl;
	cout << "�ܼƻ��Ѷ�Ϊ��" << trian.getCost(trian.Area()) << endl;

	return 0;
}