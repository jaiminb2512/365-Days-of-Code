class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        long long ans = -1;
        long long prevElementSum = 0;        
        
        for(int i = 0; i<nums.size(); i++){
            
            if(i >= 2 && nums[i] < prevElementSum){
                ans = nums[i] + prevElementSum;
            }
            
            prevElementSum += nums[i];
        }
        
        return ans;
    }
};