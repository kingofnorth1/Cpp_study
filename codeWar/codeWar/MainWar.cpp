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
	sumTwoSmallestNumbers(temp);			//ͨ������firstMin��secondMinȡ����С���
	sumTwoSmallestNumbersSort(temp);		//ʹ��std::sort�Ƚ��������ٽ���С�������
	cout << valid_braces("{}()") << endl;				//��Ч���ţ�{[()]}
	multiplication_table(3);				//��int��ת��Ϊ�б�
	//pickPeaks(temp);	//ѡ������ķ�ֵ
	return 1;
}
