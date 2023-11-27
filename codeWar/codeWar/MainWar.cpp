#include<iostream>
#include<vector>
#include "codeWar23_11.cpp"
#include "BayCar.cpp"

using namespace std;
int romanToInt(string t1);
string intToRoman(int t1);
long sumTwoSmallestNumbers(vector<int> numbers);
long sumTwoSmallestNumbersSort(vector<int> numbers);
bool valid_braces(std::string braces);
vector<vector<int>> multiplication_table(int t1);
vector<int> pick_peaks(vector<int> v);
int nthFibo(int t1);

int main() {
	romanToInt("MDCLXVI");
	intToRoman(3666);
	vector<int> temp = { 3, 2, 3, 6, 4, 1, 2, 3, 2, 1, 2, 3 };
	sumTwoSmallestNumbers(temp);			//ͨ������firstMin��secondMinȡ����С���
	sumTwoSmallestNumbersSort(temp);		//ʹ��std::sort�Ƚ��������ٽ���С�������
	cout << valid_braces("{}()") << endl;				//��Ч���ţ�{[()]}
	multiplication_table(3);				//��int��ת��Ϊ�б�
	pick_peaks(temp);						//ѡ������ķ�ֵ
    nthFibo(4);

    codeWar23_11 codewar;
    codewar.output();

    BuyCar buycar;
    buycar.nbMonths(12000, 8000, 1000, 1.5);


    return 1;
}
