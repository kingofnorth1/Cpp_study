#include<iostream>
#include<vector>

using namespace std;
int romanToInt(string t1);
string intToRoman(int t1);
long sumTwoSmallestNumbers(vector<int> numbers);
long sumTwoSmallestNumbersSort(vector<int> numbers);
bool valid_braces(std::string braces);

int main() {
	romanToInt("MDCLXVI");
	intToRoman(3666);
	vector<int> temp = { 5, 8, 12, 19, 22 };
	sumTwoSmallestNumbers(temp);			//通过定义firstMin和secondMin取得最小结果
	sumTwoSmallestNumbersSort(temp);		//使用std::sort先进行排序，再将最小结果返回
	cout << valid_braces("{}()") << endl;				//有效符号，{[()]}
	return 1;
}