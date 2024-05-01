#include <vector>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int> trusts_received(n + 1, 0);
        vector<int> trusts_given(n + 1, 0);
        
        for (const auto& relation : trust) {
            int a = relation[0];
            int b = relation[1];
            trusts_received[b]++;
            trusts_given[a]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (trusts_received[i] == n - 1 && trusts_given[i] == 0) {
                return i;
            }
        }
        
        return -1;
    }
};
