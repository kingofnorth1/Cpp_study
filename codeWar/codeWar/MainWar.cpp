#include<iostream>
#include<vector>

using namespace std;
int romanToInt(string t1);
string intToRoman(int t1);
long sumTwoSmallestNumbers(vector<int> numbers);
long sumTwoSmallestNumbersSort(vector<int> numbers);
bool valid_braces(std::string braces);
vector<vector<int>> multiplication_table(int t1);
//PeakData pickPeaks(vector<int> v1);

struct PeakData {
	vector<int> pos;
	vector<int> peaks;
};

int main() {
	romanToInt("MDCLXVI");
	intToRoman(3666);
	vector<int> temp = { 3, 2, 3, 6, 4, 1, 2, 3, 2, 1, 2, 3 };
	sumTwoSmallestNumbers(temp);			//通过定义firstMin和secondMin取得最小结果
	sumTwoSmallestNumbersSort(temp);		//使用std::sort先进行排序，再将最小结果返回
	cout << valid_braces("{}()") << endl;				//有效符号，{[()]}
	multiplication_table(3);				//将int数转换为列表
	//pickPeaks(temp);	//选择数组的峰值
	return 1;
}
