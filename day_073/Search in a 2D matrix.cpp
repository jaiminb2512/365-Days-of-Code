#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>& row, int target) {
    int low = 0, high = row.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (row[mid] == target) {
            return true; 
        } else if (row[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return false; 
}

bool findInMatrix(int x, vector<vector<int>>& arr) {
    int rows = arr.size();
    int cols = arr[0].size();

    for (int i = 0; i < rows; ++i) {
        if (binarySearch(arr[i], x)) {
            return true; 
        }
    }

    return false; 
}