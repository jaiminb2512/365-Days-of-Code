class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int tans = 0, ans = INT_MIN;
        
        for(int i : gain){
            tans += i;
            ans = max(ans, tans);
        }
        
        if(ans < 0) ans = 0;
        
        
        return ans;
    }
};