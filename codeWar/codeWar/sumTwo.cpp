#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

long sumTwoSmallestNumbers(std::vector<int> numbers) {
    long firstMin = numbers[0];
    long secondMin = numbers[1];
    numbers[0] < numbers[1] ? (firstMin = numbers[0], secondMin = numbers[1]) : (firstMin = numbers[1], secondMin = numbers[0]);
    if (numbers.size() == 2) {
        return firstMin + secondMin;
    }
    for (long i = 2; i < numbers.size();i++) {
        if (numbers[i] <= secondMin) {
            secondMin = numbers[i];
            if (secondMin <= firstMin) {
                long temp = firstMin;
                firstMin = secondMin;
                secondMin = temp;
            }
        }
    }
    cout << "firstMin + secondMin: " << firstMin + secondMin << endl;
    return firstMin + secondMin;
}

long sumTwoSmallestNumbersSort(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    cout << "sort: " << numbers[0] + numbers[1] << endl;
    return (numbers[0] + numbers[1]);
}