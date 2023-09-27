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

// �㷨 A ��ʱ�临�Ӷȣ�������
void algoArithmetic_A(int n) {
	cout << n << endl;
}
// �㷨 B ��ʱ�临�Ӷȣ����Խ�
void algoArithmetic_B(int n) {
	for (int i = 0; i < n; i++) {
		cout << 0 << endl;
	}
}
// �㷨 C ��ʱ�临�Ӷȣ�������
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
	cout << "������ֵ��" << count << endl;
}

void linear(int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		count += i;
	}
	cout << "���Խ�ֵ��" << count << endl;
}

void quadratic(int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			count++;
		}
	}
	cout << "ƽ����ֵ��" << count << endl;
}

void exponential(int n) {
	int count = 1, base = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < base; j++) {
			count++;
		}
		base *= 2;
	}
	cout << "ָ����ֵ��" << count << endl;
}

void logarithmic(int n) {
	int count = 0;
	while (n > 1) {
		for (int i = 0; i < n; i++) {
			count++;
		}
		n = n / 2;
	}

	cout << "������ֵ��" << count << endl;
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