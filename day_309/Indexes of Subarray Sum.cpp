//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        int start = 0;
        long long currentSum = arr[0];
        
        for (int end = 1; end <= n; end++) {
            while (currentSum > s && start < end - 1) {
                currentSum -= arr[start];
                start++;
            }
            
            if (currentSum == s) {
                return {start + 1, end};
            }
            
            if (end < n) {
                currentSum += arr[end];
            }
        }
        
        return {-1};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends