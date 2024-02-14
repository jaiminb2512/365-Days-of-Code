#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findSubsets(vector<int> arr, int index, int k, vector<int> &current, vector<vector<int>> &result) {
    if (accumulate(current.begin(), current.end(), 0) == k) {
        result.push_back(current);
    }

    for (int i = index; i < arr.size(); i++) {
        current.push_back(arr[i]);
        findSubsets(arr, i + 1, k, current, result);
        current.pop_back();
    }
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k) {
    vector<vector<int>> result;
    vector<int> current;

    findSubsets(arr, 0, k, current, result);

    return result;
}