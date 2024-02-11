//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
 long long factorial(int x) {
        const int MOD = 1000000007;
        long long result = 1;
        for (int i = 1; i <= x; i++) {
            result = (result * i) % MOD;
        }
        return result;
    }

    int nCr(int n, int r){
        const int MOD = 1000000007;

        // Base cases
        if (r > n)
            return 0;

        if (r == 0 || r == n)
            return 1;

        long long numerator = factorial(n);
        long long denominator = (factorial(r) * factorial(n - r)) % MOD;

        long long inverseDenominator = 1;
        long long base = denominator;
        long long exponent = MOD - 2;  // Using Fermat's Little Theorem

        while (exponent > 0) {
            if (exponent % 2 == 1) {
                inverseDenominator = (inverseDenominator * base) % MOD;
            }
            base = (base * base) % MOD;
            exponent /= 2;
        }

        return (numerator * inverseDenominator) % MOD;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends