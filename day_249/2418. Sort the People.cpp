class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<string> ans;
        unordered_map<int, string> data;
        
         for (int i = 0; i < heights.size(); i++) {
            data[heights[i]] = names[i];
        }
        
        sort(heights.begin(), heights.end(), greater<int>());

        for (int height : heights) {
            ans.push_back(data[height]);
        }

        return ans;
    }
};