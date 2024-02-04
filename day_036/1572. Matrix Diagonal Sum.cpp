class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int sum = 0;

        for (int i = 0; i < rows; i++) {
            sum += mat[i][i];  
            sum += mat[i][cols - 1 - i];  
        }

        if (rows % 2 != 0) {
            sum -= mat[rows / 2][cols / 2];
        }

        return sum;
    }
};
