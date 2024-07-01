#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
    unordered_map<int, int> freqMap;

    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    for (auto it : freqMap) {
        if (it.second > n / 2) {
            return it.first;
        }
    }

    return -1;
}