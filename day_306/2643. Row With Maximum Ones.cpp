class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxRowIdx = 0;
        int maxOnesCount = 0;
        
        for (int i = 0; i < mat.size(); ++i) {
            int onesCount = 0;
            for (int j = 0; j < mat[i].size(); ++j) {
                if (mat[i][j] == 1) {
                    ++onesCount;
                }
            }
            if (onesCount > maxOnesCount) {
                maxOnesCount = onesCount;
                maxRowIdx = i;
            }
        }
        
        return {maxRowIdx, maxOnesCount};
    }
};
