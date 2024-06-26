class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        if (k == nums.size())
            return k;
        
        cin.tie(0)->sync_with_stdio(0);
        unordered_map<int,int> a;
        int i = 0, j = 0,l=0;
        
        while (i < nums.size() && j < nums.size()) {
        
            if (a[nums[j]]+1 <= k) {
                ++a[nums[j]];
            
                ++j;
                l=max(l,j-i);
            }
            
            else {
            
                --a[nums[i]];
                i++;
                
            }
        }
        
        return l;
    }
};