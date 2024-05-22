class Solution {
public:
    int pivotInteger(int n) {
        
        vector<int>pref(n+1,0);
        
        for(int i=1;i<=n;i++) pref[i]=pref[i-1]+i;
        int ans=-1;
        
        for(int i=1;i<pref.size();i++){
            if(pref[i]==pref[n]-pref[i-1]) {
                ans=i;
                break;
            }
        }
        
        return ans;
    }
};