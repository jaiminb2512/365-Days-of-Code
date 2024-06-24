//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
        const int MOD = 1000000007;
        if (n < 3) return 1;
        
        int p[3] = {1, 1, 1};
        
       for(int i=3; i<=n; ++i){
           int next = (p[0] + p[1]) % MOD;
           p[0] = p[1];
           p[1] = p[2];
           p[2]  = next;
       }
       
       return p[2];
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends