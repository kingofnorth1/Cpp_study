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