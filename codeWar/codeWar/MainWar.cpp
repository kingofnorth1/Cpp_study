#include<iostream>
#include<vector>

using namespace std;
int romanToInt(string t1);
string intToRoman(int t1);
long sumTwoSmallestNumbers(vector<int> numbers);
long sumTwoSmallestNumbersSort(vector<int> numbers);

int main() {
	romanToInt("MDCLXVI");
	intToRoman(3666);
	vector<int> temp = { 5, 8, 12, 19, 22 };
	sumTwoSmallestNumbers(temp);			//ͨ������firstMin��secondMinȡ����С���
	sumTwoSmallestNumbersSort(temp);		//ʹ��std::sort�Ƚ��������ٽ���С�������
	return 1;
}