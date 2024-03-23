class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.empty()) return {};
        
        sort(nums.begin(), nums.end());
        vector<int> dp(nums.size(), 1);
        vector<int> prev(nums.size(), -1);
        int maxIdx = 0;
        
        for(int i = 1; i < nums.size(); ++i) {
            for(int j = 0; j < i; ++j) {
                if(nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
            if(dp[i] > dp[maxIdx]) maxIdx = i;
        }
        
        vector<int> ans;
        int idx = maxIdx;
        while(idx != -1) {
            ans.push_back(nums[idx]);
            idx = prev[idx];
        }
        
        return ans;
    }
};