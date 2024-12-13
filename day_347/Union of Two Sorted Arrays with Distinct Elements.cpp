//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        
        vector<int> result;
    int i = 0, j = 0;

    // Traverse both arrays using two pointers
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            result.push_back(a[i]);
            i++;
        } else if (b[j] < a[i]) {
            // If b[j] is smaller, add it to the result and move j
            result.push_back(b[j]);
            j++;
        } else {
            // If a[i] == b[j], add only one of them and move both i and j
            result.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements of a[]
    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }

    // Add remaining elements of b[]
    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }

    return result;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends