//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    #define MOD 1000000007
    
    int numberOfConsecutiveOnes(int n) {
        if (n == 0) return 0;
        if (n == 1) return 0; 
    
        std::vector<long long> dp0(n + 1, 0);
        std::vector<long long> dp1(n + 1, 0);
    
        dp0[1] = 1; 
        dp1[1] = 1; 
    
        for (int i = 2; i <= n; ++i) {
            dp0[i] = (dp0[i-1] + dp1[i-1]) % MOD;
            dp1[i] = dp0[i-1];
        }
    
        long long totalStrings = 1; 
        for (int i = 0; i < n; ++i) {
            totalStrings = (totalStrings * 2) % MOD;
        }
    
        long long validStrings = (dp0[n] + dp1[n]) % MOD;
        long long result = (totalStrings - validStrings + MOD) % MOD; 
    
        return result;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends