//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.

bool isPresent(int index, string s, string x){
    for(int i=0; i<s.length() && i<x.length(); i++){
        if(s[i + index] != x[i]){
            return false;
        }
    }
    
    return true;
}

int strstr(string s, string x)
{
    int i = 0;
    int index = 0;
    
    for(int i=0; i<s.length(); i++){
        if(x[0] == s[i]){
            index = max(i, index);
            
            if(isPresent(i, s, x)){
                return i;
            }
        }
    }
    
    return -1;
    
}