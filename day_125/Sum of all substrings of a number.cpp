//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
        long long mod = 1e9 + 7;
        long long r = 1, res = 0;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            res = (res + ((s[i] - '0') * (i + 1) * r) % mod) % mod;
            r = (r * 10 + 1) % mod;
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends