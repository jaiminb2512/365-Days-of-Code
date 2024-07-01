//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

    void rearrange(int arr[], int n) {
        vector<int> posEle;
        vector<int> negEle;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] < 0) {
                negEle.push_back(arr[i]);
            } else {
                posEle.push_back(arr[i]);
            }
        }
        
        int posIndex = 0, negIndex = 0, arrIndex = 0;
        
        while(posIndex < posEle.size() && negIndex < negEle.size()) {
            if (arrIndex % 2 == 0) {
                arr[arrIndex] = posEle[posIndex];
                posIndex++;
            } else {
                arr[arrIndex] = negEle[negIndex];
                negIndex++;
            }
            arrIndex++;
        }
        
        while (posIndex < posEle.size()) {
            arr[arrIndex] = posEle[posIndex];
            posIndex++;
            arrIndex++;
        }
        
        while (negIndex < negEle.size()) {
            arr[arrIndex] = negEle[negIndex];
            negIndex++;
            arrIndex++;
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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends