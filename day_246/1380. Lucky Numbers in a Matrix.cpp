class Solution {
public:
    
    bool helper(int key, int row, int col, vector<vector<int>>& matrix){
        
        for(int i = 0; i < matrix[row].size(); i++){
            if(key > matrix[row][i])
                return false;
        }
        
        for(int i = 0; i < matrix.size(); i++){
            if(key < matrix[i][col])
                return false;
        }    
        
        return true;
    }
    
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> result;
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(helper(matrix[i][j], i, j, matrix)){
                    result.push_back(matrix[i][j]);
                }
            }
        }
        
        return result;
    }
};
