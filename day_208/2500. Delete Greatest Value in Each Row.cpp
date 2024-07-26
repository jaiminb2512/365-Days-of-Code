class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int sum = 0;

        
        for (int i = 0; i < row; ++i) {
            sort(grid[i].begin(), grid[i].end());
        }

       
        for (int c = col - 1; c >= 0; --c) {
            int maxVal = INT_MIN;
        
            for (int r = 0; r < row; ++r) {
                maxVal = max(maxVal, grid[r][c]);
            }
            
            sum += maxVal;
        }

        return sum;
    }
};