class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> freqMap;
        
        for (int num : nums){
            freqMap[num]++;
        }
        
        vector<int> res;
        for (const auto& entry : freqMap){
            if(entry.second == 1){
                res.push_back(entry.first);
            }
        }
        
        return res;
    }
};