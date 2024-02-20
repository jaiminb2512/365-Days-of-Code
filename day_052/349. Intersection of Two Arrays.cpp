class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> ans;
        
        int l1 = nums1.size();
        int l2 = nums2.size();
        
        
        for(int i=0; i<l1; i++){
            for(int j=0; j<l2; j++){

                if(nums1[i] == nums2[j]){
                    ans.insert(nums1[i]);
                }
            }
        }
        
        
        vector<int> res;
        
        for (const auto& j : ans) {
        res.push_back(j);
    }
        
        return res;
    }
};