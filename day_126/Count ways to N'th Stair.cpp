//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to count number of ways to reach the nth stair
    // when order does not matter.
    long long countWays(int n) {
        long long prev = 1;
        long long current = 1;

        for (int i = 2; i <= n; i++) {
            long long temp = current;
            current = current + (i % 2 == 0 ? 1 : 0);
            prev = temp;
        }
        
        return current;
    
    }
};

//{ Driver Code Starts.
int main() {
    // taking count of testcases
    int t;
    cin >> t;

    while (t--) {
        // taking stair count
        int n;
        cin >> n;
        Solution ob;
        cout << ob.countWays(n) << endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends