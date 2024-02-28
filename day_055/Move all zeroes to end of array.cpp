//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
    	int nonZeroPos = 0;
    
        // Traverse the array
        for (int i = 0; i < n; ++i) {
            // If the current element is non-zero, move it to the nonZeroPos and increment nonZeroPos
            if (arr[i] != 0) {
                arr[nonZeroPos++] = arr[i];
            }
        }
    
        // Fill the remaining positions with zeros
        for (int i = nonZeroPos; i < n; ++i) {
            arr[i] = 0;
    	}
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends