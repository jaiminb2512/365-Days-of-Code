#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count1;
        vector<int> ans;

        for (int num : nums1) {
            count1[num]++;
        }

        for (int num : nums2) {
            if (count1[num] > 0) {
                ans.push_back(num);
                count1[num]--;
            }
        }

        return ans;
    }
};
