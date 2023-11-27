#include<iostream>
#include <vector>
using namespace std;


vector<vector<int>> multiplication_table(int n) {
    vector<vector<int>> index;
    for (int i = 1; i <= n; i++) {
        vector<int> column;
        for (int j = 1; j <= n; j++) {
            int number = i * j;
            column.push_back(number);
        }
        index.push_back(column);
    }
    for (vector<int> i : index) {
        for (int j : i) {
            cout << j << " " << "";
        }
    }
    return index;
}


int nthFibo(int n) {
    int n1 = 0; 
    int n2 = 1;
    for (int i = 1; i < n; i++) {
        int temp = n2;
        n2 = n2 + n1;
        n1 = temp;
    }
    cout << n1 << "  " << n2 << endl;
    return n1;
}


