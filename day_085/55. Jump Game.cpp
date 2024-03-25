class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size(),i=n-2;
        int goal=n-1;
        
        while(i>=0){
            if(i+nums[i]>=goal){
                goal=i;
                i--;
            }
            else {
                i--;
            }
        }
        return goal==0?true:false;
    } 
    
};