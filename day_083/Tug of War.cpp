#include <bits/stdc++.h> 

int tugOfWarHelper(vector<int> &arr, int n, int i, int subsetSum, int cnt, int totalSum) {
    if (i == n) {
        if (cnt == n / 2) {
            return abs(totalSum - 2 * subsetSum);
        } else {
            return INT_MAX;
        }
    }
    
    int includeCurrent = tugOfWarHelper(arr, n, i + 1, subsetSum + arr[i], cnt + 1, totalSum);
    
    int excludeCurrent = tugOfWarHelper(arr, n, i + 1, subsetSum, cnt, totalSum);
    
    return min(includeCurrent, excludeCurrent);
}

int tugOfWar(vector<int> &arr, int n) {
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    
    return tugOfWarHelper(arr, n, 0, 0, 0, totalSum);
}
