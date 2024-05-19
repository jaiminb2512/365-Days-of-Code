
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int Perimeter = 0;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 1){
                    Perimeter += 4;
                    
                    if(i > 0 && grid[i - 1][j] == 1) 
                        Perimeter -= 2;
                    if(j > 0 && grid[i][j - 1] == 1)
                        Perimeter -= 2;
                }
            }
        }
        
        return Perimeter;
    }
};