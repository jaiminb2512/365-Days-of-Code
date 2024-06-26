//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    
    int maxIndexDiff(int a[], int n) {
        int* right = new int[n];
        int* left = new int[n];
        left[0] = a[0];
        right[n - 1] = a[n - 1];
    
        for (int i = 1; i < n; i++)
            left[i] = min(a[i], left[i - 1]);
    
        for (int j = n - 2; j >= 0; j--)
            right[j] = max(a[j], right[j + 1]);
    
        int i = 0, j = 0, ans = INT_MIN;
        while (j < n && i < n) {
            if (left[i] <= right[j]) {
                ans = max(ans, j - i);
                j++;
            } else
                i++;
        }
        delete[] right;
        delete[] left;
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends