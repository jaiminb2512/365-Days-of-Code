class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> z;
        int n=nums.size();
        
        for(int i=0;i<n;i++) {
            if(nums[i]==0)
                z.push_back(i);
        }
        
        int maxi=INT_MIN,n1=z.size();
        if(n1<=1)
            return n-1;
        
        if(n1>=2) {
             maxi=max(maxi,z[1]-1);
             maxi=max(maxi,n-z[n1-2]-2);
        }
        
        for(int i=1;i<n1-1;i++) {
            maxi=max(maxi,z[i+1]-z[i-1]-2);
        }
        
        return maxi;
    }
};