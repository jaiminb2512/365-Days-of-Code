//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        vector<int> al;
        unordered_set<int> set;
    
        al.push_back(0);
        set.insert(0);
    
        for (int i = 1; i < n; ++i) {
            int ans = al[i - 1] - i;
            if (ans > 0 && set.find(ans) == set.end()) {
                al.push_back(ans);
                set.insert(ans);
            } else {
                al.push_back(al[i - 1] + i);
                set.insert(al[i - 1] + i);
            }
        }
        return al;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends