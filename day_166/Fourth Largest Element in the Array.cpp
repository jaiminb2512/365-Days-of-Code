#include <queue>
#include <vector>
#include <climits> 
using namespace std;

int getFourthLargest(int arr[], int n) {
    if (n < 4) {
        return INT_MIN; 
    }
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for (int i = 0; i < 4; ++i) {
        minHeap.push(arr[i]);
    }
    
    for (int i = 4; i < n; ++i) {
        if (arr[i] > minHeap.top()) {
            minHeap.pop();
            minHeap.push(arr[i]);
        }
    }
    
    return minHeap.top();
}
