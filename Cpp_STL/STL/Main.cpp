#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> demo();

int main() {
	vector<string> out = demo();
	for (auto i : out) {
		cout << i << endl;
	}
}

vector<string> demo() {
	vector<string> res = { "abc","res" };
	res[res.size() - 1] += "_";
	return res;
}