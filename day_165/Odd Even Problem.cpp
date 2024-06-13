//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    string oddEven(std::string s) {
    
        std::vector<int> freq(26, 0);
        
    
        for (char c : s) {
            freq[c - 'a']++;
        }
    
        int x = 0, y = 0;
    
        for (int i = 0; i < 26; ++i) {
            int position = i + 1; 
            int frequency = freq[i];
            
    
            if (position % 2 == 0 && frequency % 2 == 0 && frequency > 0) {
                x++;
            }
            if (position % 2 == 1 && frequency % 2 == 1 && frequency > 0) {
                y++;
            }
        }
        
        int sum = x + y;
        
        return (sum % 2 == 0) ? "EVEN" : "ODD";
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends