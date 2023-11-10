#include <vector>
#include<iostream>
using namespace std;

struct PeakData {
	vector<int> pos, peaks;
};

#include <vector>

PeakData pick_peaks(const std::vector<int>& v) {
    PeakData result;
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i] > v[i - 1] && v[i] > v[i + 1] && i != v.size() - 1) {
            result.pos.push_back(i);
            result.peaks.push_back(v[i]);
        }
        if (v[i] > v[i - 1] && v[i] == v[i + 1]) {
            for (int j = i; j < v.size() - 1; j++) {
                if (v[j] < v[j + 1]) {
                    return result;
                }
                if (v[j] > v[j + 1]) {
                    result.pos.push_back(i);
                    result.peaks.push_back(v[i]);
                }
            }
        }
    }
    return result;
}