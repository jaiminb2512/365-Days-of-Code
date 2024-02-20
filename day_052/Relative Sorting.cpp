#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> relativeSorting(vector<int> &arr, vector<int> &brr, int n, int m) {
    unordered_map<int, int> countMap;
    vector<int> result;

    for (int num : arr) {
        countMap[num]++;
    }

    for (int num : brr) {
        if (countMap.find(num) != countMap.end()) {
            int occurrences = countMap[num];
            while (occurrences--) {
                result.push_back(num);
            }
            countMap.erase(num);
        }
    }

    vector<int> remainingElements;
    for (auto &entry : countMap) {
        int num = entry.first;
        int occurrences = entry.second;
        while (occurrences--) {
            remainingElements.push_back(num);
        }
    }

    sort(remainingElements.begin(), remainingElements.end());

    result.insert(result.end(), remainingElements.begin(), remainingElements.end());

    return result;
}