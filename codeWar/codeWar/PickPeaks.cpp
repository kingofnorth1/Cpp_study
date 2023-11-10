#include <vector>
#include<iostream>
using namespace std;

struct PeakData {
	vector<int> pos, peaks;
};

PeakData pickPeaks(const std::vector<int>& v) {
	PeakData result;
	for (int i = 1; i < v.size()-1;i++) {
		if (v[i] > v[i - 1] && v[i] > v[i+1]) {
			result.pos.push_back(i);
			result.peaks.push_back(i);
		}
	}
	return result;
}