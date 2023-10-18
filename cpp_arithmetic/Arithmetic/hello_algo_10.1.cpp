#include<iostream>
#include <vector>

using namespace std;
int binary_search(vector<int>& nums, int target);

int binary_search_print() {
	vector<int> temp = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "二分查找4的索引为：" << binary_search(temp, 4) << endl;
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
	int i = 0, j = nums.size() - 1; // 初始化双闭区间 [0, n-1]
	while (i <= j) {
		int m = i + (j - i) / 2; // 计算中点索引 m
		if (nums[m] < target) {
			i = m + 1; // target 在区间 [m+1, j] 中
		}
		else if (nums[m] > target) {
			j = m - 1; // target 在区间 [i, m-1] 中
		}
		else {
			j = m - 1; // 首个小于 target 的元素在区间 [i, m-1] 中
		}
	}
	// 返回插入点 i
	return i;
}