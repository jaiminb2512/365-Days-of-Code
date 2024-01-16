//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	 int max = INT_MIN; // Initialize to a small value
        int min = INT_MAX; // Initialize to a large value
        
        for(int i = 0; i < N; i++)
        {
            if(max < A[i])
            {
                max = A[i];
            }
            
            if(min > A[i])
            {
                min = A[i];
            }
        }
        return min + max;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;s
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends