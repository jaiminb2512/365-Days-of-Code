class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int totalSum = (rolls.size() + n) * mean;
        int knownSum = 0;
        for (int num : rolls) {
            knownSum += num;
        }
        
        int missingSum = totalSum - knownSum;
        
        if (missingSum < n * 1 || missingSum > n * 6) {
            return {};
        }
        
        vector<int> result(n, missingSum / n);
        int remainder = missingSum % n;
        
        for (int i = 0; i < remainder; ++i) {
            result[i]++;
        }
        
        return result;
    }
};
