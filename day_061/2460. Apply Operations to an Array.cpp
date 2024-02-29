class Solution {
public:
    
    vector<int> shiftZerosToEnd(vector<int>& nums) {
        int n = nums.size();
        
        int nonZeroIndex = 0;
        for (int i = 0; i < n; ++i) {
            if (nums[i] != 0) {
                swap(nums[i], nums[nonZeroIndex]);
                ++nonZeroIndex;
            }
        }
        
        return nums;
    }

    vector<int> applyOperations(vector<int>& nums) {
        int index = nums.size() - 1;

        for (int i = 0; i < index; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        return shiftZerosToEnd(nums);
    }
};