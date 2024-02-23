#include <iostream>
#include <vector>
#include <algorithm>

int minSwaps(vector<int>& arr) {
    int n = arr.size();
    vector<pair<int, int>> arrWithIndex(n);

    for (int i = 0; i < n; ++i) {
        arrWithIndex[i] = {arr[i], i};
    }

    sort(arrWithIndex.begin(), arrWithIndex.end());

    int swaps = 0;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; ++i) {
        if (visited[i] || arrWithIndex[i].second == i) {
            continue;
        }

        int cycleSize = 0;
        int j = i;

        while (!visited[j]) {
            visited[j] = true;
            j = arrWithIndex[j].second;
            cycleSize++;
        }

        swaps += (cycleSize - 1);
    }

    return swaps;
}
