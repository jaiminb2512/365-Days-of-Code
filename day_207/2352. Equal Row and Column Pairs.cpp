class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<string, int> rowMap;

       
        for (int i = 0; i < n; ++i) {
            string rowString;
            for (int j = 0; j < n; ++j) {
                rowString += to_string(grid[i][j]) + ",";
            }
            rowMap[rowString]++;
        }

        int count = 0;

        
        for (int j = 0; j < n; ++j) {
            string colString;
            for (int i = 0; i < n; ++i) {
                colString += to_string(grid[i][j]) + ",";
            }
            if (rowMap.find(colString) != rowMap.end()) {
                count += rowMap[colString];
            }
        }

        return count;
    }
};