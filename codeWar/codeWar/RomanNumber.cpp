#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>s
using namespace std;

int romanToInt(string roman) {
	map<char, int> values = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
	int result = 0;
	for (int i = 0; i < roman.size(); i++) {
		if (i > 0 && values[roman[i]] > values[roman[i-1]]) {
			result += values[roman[i]] - 2 * values[roman[i - 1]];
		}
		else {
			result += values[roman[i]];
		}
	}
	cout << result << endl;
	return result;
}

string intToRoman(int num) {
	vector<string> symbols({ "I","V","X","L","C","D","M" });
	vector<int> values{ 1,5,10,50,100,500,1000 };
	string result = "";

	for (int i = values.size()-1; i >= 0; --i) {
		while (num >= values[i]) {
			num -= values[i];
			result += symbols[i];
		}
	}
	cout << result << endl;
	return result;
}