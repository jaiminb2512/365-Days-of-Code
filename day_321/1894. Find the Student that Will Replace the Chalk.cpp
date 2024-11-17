class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long totalChalk = 0;
        for (int i = 0; i < chalk.size(); i++) {
            totalChalk += chalk[i];
        }
        ss
        k %= totalChalk;
        
        for (int i = 0; i < chalk.size(); i++) {
            if (chalk[i] > k) {
                return i;
            }
            k -= chalk[i];
        }
        
        return -1; 
    }
};
