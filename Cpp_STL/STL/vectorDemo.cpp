#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> demo();

int vectorDemo() {
	vector<string> out = demo();
	for (auto i : out) {
		cout << i << endl;
	}
	return 1;
}

vector<string> demo() {
	vector<string> res = { "abc","res" };
	res[res.size() - 1] += "_";
	return res;
}