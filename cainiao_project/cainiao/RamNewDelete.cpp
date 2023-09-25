#include<iostream>
#include<string>
using namespace std;

int RamNewDelete()
{
	int** p;
	int i, j;
	p = new  int*[4];
	for (i=0;i<4;i++)
	{
		p[i] = new int[8];
	}

	for (i=0;i<4;i++)
	{
		for (j=0;j<8;j++)
		{
			p[i][j] = i * j;
		}
	}

	for (i=0;i<4;i++)
	{
		for (j=0;j<8;j++)
		{
			if (j == 0) cout << endl;
			cout << p[i][j] << endl;
		}
	}

	for (i=0;i<4;i++)
	{
		delete[] p[i];
	}
	delete[] p;
	return 0;
}

template <typename T>
inline T const& Max(T const& a, T const& b)
{
	return a > b ? a:b;
}

int Template()
{
	int i = 30;
	int j = 20;
	cout << "Max(i,j):" << Max(i, j) << endl;
	return 0;
}