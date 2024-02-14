//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
    
    reverse(S.begin(), S.end());

   int start = 0;
    for (int end = 0; end < S.size(); ++end) {
        if (S[end] == '.') {
            std::reverse(S.begin() + start, S.begin() + end);
            start = end + 1;
        }
    }

   
    reverse(S.begin() + start, S.end());

    return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends