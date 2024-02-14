void printSeriesHelper(int n, int k, vector<int>& result) {
    if (n <= 0) {
        result.push_back(n);
        return;
    }

    result.push_back(n);
    printSeriesHelper(n - k, k, result);
    result.push_back(n);
}

vector<int> printSeries(int n, int k) {
    vector<int> result;
    printSeriesHelper(n, k, result);
    return result;
}