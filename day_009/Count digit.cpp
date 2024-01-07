//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
    int originalN = N;
        int count = 0;

        // Iterate through each digit of N
        while (N > 0) {
            int digit = N % 10;

            // Avoid division by zero and check if the digit evenly divides N
            if (digit != 0 && originalN % digit == 0) {
                count++;
            }

            // Move to the next digit
            N /= 10;
    }
    return count ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends