//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
     
    priority_queue<long long, vector<long long>, greater<long long>> minHeap(arr, arr + n);

    long long totalCost = 0;
 
    while (minHeap.size() > 1) {
        long long rope1 = minHeap.top();
        minHeap.pop();

        long long rope2 = minHeap.top();
        minHeap.pop();

        long long newRope = rope1 + rope2;
        totalCost += newRope;

        minHeap.push(newRope);
    }

    return totalCost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends