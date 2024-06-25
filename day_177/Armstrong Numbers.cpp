//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string armstrongNumber(int n) {
        
        int hundreds = n / 100;
        int tens = (n / 10) % 10;
        int units = n % 10;
        
        
        int sumOfCubes = (hundreds * hundreds * hundreds) + 
                         (tens * tens * tens) + 
                         (units * units * units);
        
        if (sumOfCubes == n) {
            return "true";
        } else {
            return "false";
        }
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends