int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickselect(vector<int>& arr, int low, int high, int k) {
    if (low < high) {
        int pi = partition(arr, low, high);

        if (pi == k - 1)
            return arr[pi];
        else if (pi < k - 1)
            return quickselect(arr, pi + 1, high, k);
        else
            return quickselect(arr, low, pi - 1, k);
    }

    return arr[low];
}

int kthSmallest(int n, int k, vector<int> Arr) {
    return quickselect(Arr, 0, n - 1, k);
}