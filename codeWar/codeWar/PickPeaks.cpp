#include <vector>
#include<iostream>
#include<string>
using namespace std;

vector<int> pick_peaks(vector<int> v) {
    vector<int> peaks;
    for (int i = 0; i < v.size(); i++) {
        if (i == 0 || i == v.size() - 1) {
            continue;
        }
        else if ((v[i] > v[i - 1]) && (v[i] > v[i + 1])) {
            peaks.push_back(v[i]);
        }
        else if ((v[i] > v[i - 1]) && (v[i] == v[i + 1])) {
            for (int j = i; j < v.size(); j++) {
                if (v[j] > v[j + 1]) {
                    peaks.push_back(v[i]);
                }
                if (v[j] < v[j + 1]) {
                    i = j-1;
                    break;
                }
            }
        }
    }
    string str = "(";
    for (int i = 0; i < peaks.size(); i++) {
        string temp = to_string(i);
        //str = str + temp + ", ";
        i != peaks.size()-1 ? str = str + temp + ", " : str = str + temp;
    }
    cout << str << ")" << endl;
    return peaks;
}
