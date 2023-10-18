#include<iostream>
using namespace std;

int algoArithmetic(int n) {
	int a = 2;
	a += 2;
	a *= 2;
	for (int i = 0; i < n; i++) {
		cout << 0 << endl;
	}
	return 0;
}

// 算法 A 的时间复杂度：常数阶
void algoArithmetic_A(int n) {
	cout << n << endl;
}
// 算法 B 的时间复杂度：线性阶
void algoArithmetic_B(int n) {
	for (int i = 0; i < n; i++) {
		cout << 0 << endl;
	}
}
// 算法 C 的时间复杂度：常数阶
void algoArithmetic_C(int n) {
	for (int i = 0; i < 1000000; i++) {
		cout << 0 << endl;
	}
}

void constant(int n) {
	int count = 0;
	int size = 1000;
	for (int i = 0; i < size; i++) {
		count += i;
	}
	cout << "常数阶值：" << count << endl;
}

void linear(int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		count += i;
	}
	cout << "线性阶值：" << count << endl;
}

void quadratic(int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			count++;
		}
	}
	cout << "平方阶值：" << count << endl;
}

void exponential(int n) {
	int count = 1, base = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < base; j++) {
			count++;
		}
		base *= 2;
	}
	cout << "指数阶值：" << count << endl;
}

void logarithmic(int n) {
	int count = 0;
	while (n > 1) {
		for (int i = 0; i < n; i++) {
			count++;
		}
		n = n / 2;
	}

	cout << "对数阶值：" << count << endl;
}

int linearLogRecur(int n) {
	if (n < 1) {
		return 1;
	}
	int count = linearLogRecur(n / 2) + linearLogRecur(n / 2);
	for (int i = 0; i < n; i++) {
		count++;
	}
	return count;
}

int factorialRecur(int n) {
	if (n == 0) {
		return 1;
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		count += factorialRecur(n - 1);
	}
	return count;
}