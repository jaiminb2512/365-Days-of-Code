//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int r) {
       
       int ans = 0;
       int limit = 2 * r * 2 * r;
       
       for(int i = 1; i < 2 * r + 1; i++){
           for(int j = 1; j < 2 * r + 11; j++){
               if(i * i + j * j <= limit){
                   ans++;
               }
           }
       }
       
       return ans;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends