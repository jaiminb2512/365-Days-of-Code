class Solution {
public:
    
    void helper(vector<vector<int>>& matrix,  vector<int> ansRow, vector<int> ansCol){
        
        for(int j : ansCol){
            for(int i=0; i<matrix.size(); i++){
                matrix[i][j] = 0;
            }
        }
        
        for(int j : ansRow){
            for(int i=0; i<matrix[0].size(); i++){
                matrix[j][i] = 0;
            }
        }
        
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int> ansRow;
        vector<int> ansCol;
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    ansRow.push_back(i);
                    ansCol.push_back(j);
                }
            }
        }       
        
        helper(matrix, ansRow, ansCol);
                
    }
};