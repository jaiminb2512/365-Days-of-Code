//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    
    bool isSorted(int arr[], int low, int high) {
        for (int i = low + 1; i <= high; i++) {
            if (arr[i - 1] > arr[i]) {
                return false;
            }
        }
        return true;
    }
    
    int minNumber(int arr[], int low, int high) {
        if (isSorted(arr, low, high)) {
            return arr[low];
        }
    
        int mid = low + (high - low) / 2;
    
        int leftMin = minNumber(arr, low, mid);
    
        int rightMin = minNumber(arr, mid + 1, high);
    
        return min(leftMin, rightMin);
    }

};

//{ Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends