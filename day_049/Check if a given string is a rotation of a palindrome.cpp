//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    
    bool isPalindrome(string str) {
        int start = 0;
        int end = str.length() - 1;
    
        while (start < end) {
            if (str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }
    
        return true;
    }

    int isRotatedPalindrome(string s) {
        int n = s.length();
    
        for (int i = 0; i < n; i++) {
            string rotated = s.substr(i) + s.substr(0, i);
    
            if (isPalindrome(rotated)) {
                return 1; 
            }
        }
    
        return 0;
	}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isRotatedPalindrome(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends