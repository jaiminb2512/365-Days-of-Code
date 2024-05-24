class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> count;
        int maxLen = 0;
        int sum = 0;

        count[0] = -1;

        for (int i = 0; i < nums.size(); ++i) {
            
            sum += (nums[i] == 0) ? -1 : 1;
            
            if (count.find(sum) != count.end()) {
                maxLen = max(maxLen, i - count[sum]);
            } 
            
            else {
                count[sum] = i;
            }
        }

        return maxLen;
    }
};