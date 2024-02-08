//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    long long power(int N, int R) {
        const int MOD = 1000000007;

        if (R == 0) {
            return 1;
        }

        long long result = 1;
        long long base = N % MOD;

        while (R > 0) {
            if (R % 2 == 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            R /= 2;
        }

        return result;
    }


};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends