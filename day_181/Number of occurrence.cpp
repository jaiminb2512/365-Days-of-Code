#include <vector>

int count(vector<int>& arr, int n, int x) {
    int firstOccurrence = -1;
    int lastOccurrence = -1;

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            firstOccurrence = mid;
            high = mid - 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            lastOccurrence = mid;
            low = mid + 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    int totalCount = 0;
    if (firstOccurrence != -1 && lastOccurrence != -1) {
        totalCount = lastOccurrence - firstOccurrence + 1;
    }

    return totalCount;
}
