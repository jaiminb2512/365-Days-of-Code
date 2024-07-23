class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum = accumulate(nums.begin(), nums.end(), 0); 
        int left_sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (left_sum * 2 == total_sum - nums[i]) 
                return i;
            left_sum += nums[i];
        }

        return -1;
    }
};