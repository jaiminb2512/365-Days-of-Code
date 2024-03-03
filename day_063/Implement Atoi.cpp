//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        
        if(s.empty()){
            return -1;
        }
        
        int result = 0;
        int sign = 1;
        
        if(s[0] == '-'){
            sign = -1;
        }
        
        for(int i = (s[0] == '-' || s[0] == '+') ? 1 : 0; i < s.length(); ++i){
            
            if(!isdigit(s[i])){
                return -1;
            }
            
            result = result * 10 + (s[i] - '0');
        }
        
        return sign * result;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends