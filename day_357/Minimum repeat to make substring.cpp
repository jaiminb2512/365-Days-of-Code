//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    int minRepeats(string s1, string s2) {
        int repeatCount = 1;  
        string repeatedS1 = s1;

        while (repeatedS1.length() < s2.length()) {
            repeatedS1 += s1;
            repeatCount++;
        }

        if (repeatedS1.find(s2) != string::npos) {
            return repeatCount;
        }

        repeatedS1 += s1;
        repeatCount++;

        if (repeatedS1.find(s2) != string::npos) {
            return repeatCount;
        }

        return -1;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends