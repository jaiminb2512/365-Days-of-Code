class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = k - 1;
        int sum = 0;
        for (int x = 0; x <= j; x++) {
            sum += nums[x];
        }
        int maxSum = sum;
        j++;
        while (j < nums.size()) {
            sum -= nums[i++];
            sum += nums[j++];
            maxSum = max(sum, maxSum);
        }
        return maxSum / (double)k;
    }
};