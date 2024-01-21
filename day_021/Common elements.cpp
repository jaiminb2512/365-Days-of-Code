//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
             vector<int> result;

            int i = 0, j = 0, k = 0;

            while (i < n1 && j < n2 && k < n3)
            {
                // If the elements are equal, add to the result
                if (A[i] == B[j] && B[j] == C[k])
                {
                    result.push_back(A[i]);

                    // Move all three pointers to the next distinct element
                    while (i < n1 && A[i] == result.back())
                        i++;
                    while (j < n2 && B[j] == result.back())
                        j++;
                    while (k < n3 && C[k] == result.back())
                        k++;
                }
                else
                {
                    // Move the pointer pointing to the smallest element
                    if (A[i] <= B[j] && A[i] <= C[k])
                        i++;
                    else if (B[j] <= A[i] && B[j] <= C[k])
                        j++;
                    else
                        k++;
                }
            }

            // If no common element found, return an empty array
            if (result.empty())
                result.push_back(-1);

            return result;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends