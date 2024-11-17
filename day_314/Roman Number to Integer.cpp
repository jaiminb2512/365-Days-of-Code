//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char, int> number;
        number['I'] = 1;
        number['V'] = 5;
        number['X'] = 10;
        number['L'] = 50;
        number['C'] = 100;
        number['D'] = 500;
        number['M'] = 1000;
    
        int ans = 0;
        int n = str.size();
    
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && number[str[i]] < number[str[i + 1]]) {
                ans -= number[str[i]];
            } else {
                ans += number[str[i]];
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends