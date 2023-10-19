#include<iostream>
#include <vector>

using namespace std;
int binary_search(vector<int>& nums, int target);

int binary_search_print() {
	vector<int> temp = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "���ֲ���4������Ϊ��" << binary_search(temp, 4) << endl;
	return 0;
}

int binary_search(vector<int> &nums, int target) {
	int i = 0, j = nums.size();
	while (i <= j) {
		int middle = i+(j - i) / 2;
		if (target > nums[middle]) {
			i = middle;
		}
		else if (target < nums[middle]) {
			j = middle+1;
		}
		else {
			return middle;
		}
	}
	return -1;
}

int binarySearchInsertion(vector<int>& nums, int target) {
	int i = 0, j = nums.size() - 1; // ��ʼ��˫������ [0, n-1]
	while (i <= j) {
		int m = i + (j - i) / 2; // �����е����� m
		if (nums[m] < target) {
			i = m + 1; // target ������ [m+1, j] ��
		}
		else if (nums[m] > target) {
			j = m - 1; // target ������ [i, m-1] ��
		}
		else {
			j = m - 1; // �׸�С�� target ��Ԫ�������� [i, m-1] ��
		}
	}
	// ���ز���� i
	return i;
}