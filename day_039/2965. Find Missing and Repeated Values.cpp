#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq(n * n + 1, 0);
        vector<int> result(2);

        int repeated, missing;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                freq[grid[i][j]]++;
            }
        }

        for (int i = 1; i <= n * n; ++i) {
            if (freq[i] == 2) {
                repeated = i;
            } else if (freq[i] == 0) {
                missing = i;
            }
        }

        result[0] = repeated;
        result[1] = missing;
        return result;
    }
};
