//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
    {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }
    
        unordered_map<int, int> freqCount;
        for (const auto& pair : freq) {
            freqCount[pair.second]++;
        }
    
        if (freqCount.size() == 1) {
            return true;
        }
    
        if (freqCount.size() > 2) {
            return false;
        }
    
        auto it = freqCount.begin();
        int firstFreq = it->first;
        int firstFreqCount = it->second;
        ++it;
        int secondFreq = it->first;
        int secondFreqCount = it->second;
    
        if ((firstFreq == 1 && firstFreqCount == 1) || (secondFreq == 1 && secondFreqCount == 1)) {
            return true;
        }
    
        if ((firstFreq - secondFreq == 1 && firstFreqCount == 1) || (secondFreq - firstFreq == 1 && secondFreqCount == 1)) {
            return true;
        }
    
        return false;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends