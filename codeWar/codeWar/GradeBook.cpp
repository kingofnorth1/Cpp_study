#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int solution(string roman) {
	int romanInt = atoi(roman.c_str());
	string temp = "";
	for (int i = 1; i < roman.length(); i++) {
		int temp = pow(10,i);
		romanInt;
		//cout << romanInt/temp*temp << endl;
	}
	return 0;
}