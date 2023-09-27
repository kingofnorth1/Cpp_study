#include <iostream>

using namespace std;

int forLoop() {
	int ref = 0;
	for (int i = 0; i < 100; i++) {
		ref += i;
	}
	cout << "值为：" << ref << endl;
	return 0;
}

int feibolaqie() {
	int head = 1;
	int tails = 1;
	cout << " " << head << " " << tails << " ";
	for (int i = 0; i < 10; i++) {
		int temp = head + tails; 
		cout << " " << temp << " ";
		head = tails;
		tails = temp;
	}
	cout << "\n" << endl;
	return 0;
}

int recur(int n) {
	if (n == 1) {
		return 1;
	}
	int ref = recur(n - 1);
	cout << "递归值：" << n + ref << endl;
	return n+ref;
}

int tailRecur(int n,int ref){
	if (n == 0) {
		return ref;
	}
	cout << "尾递归值：" << ref << endl;
	return tailRecur(n-1,ref+n);
}

int fib(int n) {
	if (n == 1 || n == 2) {
		return n - 1;
	}
	int ref = fib(n - 1) + fib(n - 2);
	//cout << "斐波拉契数列递归值：" << ref << endl;
	return ref;
}