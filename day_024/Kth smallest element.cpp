//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    int partition(int arr[], int l, int r) {
        int pivot = arr[r];
        int i = l - 1;
        
        for (int j = l; j < r; ++j) {
            if (arr[j] <= pivot) {
                ++i;
                swap(arr[i], arr[j]);
            }
        }
        
        swap(arr[i + 1], arr[r]);
        return i + 1;
    }

    int kthSmallestUtil(int arr[], int l, int r, int k) {
        if (l <= r) {
            int pivotIndex = partition(arr, l, r);
            
            if (pivotIndex == k) {
                return arr[pivotIndex];
            } else if (pivotIndex < k) {
                return kthSmallestUtil(arr, pivotIndex + 1, r, k);
            } else {
                return kthSmallestUtil(arr, l, pivotIndex - 1, k);
            }
        }
        return -1; 
    }

    int kthSmallest(int arr[], int l, int r, int k) {
        return kthSmallestUtil(arr, l, r, k - 1); 
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends