class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int row = coordinates.size();

        if (row < 2) {
            return false;
        }

        int deltaX = coordinates[1][0] - coordinates[0][0];
        int deltaY = coordinates[1][1] - coordinates[0][1];

        for (int i = 2; i < row; ++i) {
            int deltaX_i = coordinates[i][0] - coordinates[0][0];
            int deltaY_i = coordinates[i][1] - coordinates[0][1];

            if (deltaX_i * deltaY != deltaY_i * deltaX) {
                return false;
            }
        }

        return true;
    }
};
