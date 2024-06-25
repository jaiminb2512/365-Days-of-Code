class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        bool b[(int) nums.size()];
        
        for (bool &it:b)it = false;
        
        for (auto it:nums) {
            if (b[it])return it;
            b[it] = true;
        }
        
        return 0;
    }
};