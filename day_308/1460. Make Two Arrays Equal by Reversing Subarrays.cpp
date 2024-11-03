class Solution {
public:
   bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> targetMap, arrMap;

        for (int num : target) {
            targetMap[num]++;
        }

        for (int num : arr) {
            arrMap[num]++;
        }

        return targetMap == arrMap;
    }
};