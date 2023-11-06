#include<iostream>
using namespace std;

template<typename T>
void printValue(const T& value) {
	cout << "The value num1: " << value << endl;
}

template<typename T>
T add(T& num1, T& num2) {
	T temp = num1 + num2;
	cout << "num1+num2: " << temp << endl;
	return temp;
}

int templateFun() {
	int num1 = 2, num2 = 4;
	printValue<int>(num1);
    add<int>(num1, num2);
	return 1;
}