class Solution {
public:
    bool areSimilar(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size(), newCol=0;

        for(int row=0; row<n; row++){
            for(int col=0; col<m; col++){
                
                if(!row&2) newCol = (abs(col- k))%m;
                else newCol = (col + k)%m;

               if(grid[row][newCol] != grid[row][col]) return false;
            }
        }
        return true;
    }
};