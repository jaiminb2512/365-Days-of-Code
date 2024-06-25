#include <bits/stdc++.h> 

void maxHeapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

int kthLargest(vector<int>& arr, int size, int K) {
    buildMaxHeap(arr);
    for (int i = 0; i < K - 1; i++) {
        swap(arr[0], arr[size - 1 - i]);
        maxHeapify(arr, size - 1 - i, 0);
    }
    return arr[0];
}