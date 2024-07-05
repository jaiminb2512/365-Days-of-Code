//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int height(int n){
        
        if(n == 1 || n == 2){
            return 1;
        }
        
        else if(n == 3 || n == 4){
            return 2;
        }
        
        int ans = 0;
        int tans = 1; 
        while(n >= tans){
            ans++;
            n -= tans;
            tans++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.height(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends