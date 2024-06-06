#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        int size = score.size();
        
        vector<int> sortedScore(score);
        
        sort(sortedScore.rbegin(), sortedScore.rend());
        
        vector<string> rank = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        
        for(int i = 0; i < size; i++){
            auto it = find(sortedScore.begin(), sortedScore.end(), score[i]);
            int rankIdx = distance(sortedScore.begin(), it) + 1;
            
            if(rankIdx <= 3){
                ans.push_back(rank[rankIdx - 1]);
            } else {
                ans.push_back(to_string(rankIdx));
            }
        }
        
        return ans;
    }
};
