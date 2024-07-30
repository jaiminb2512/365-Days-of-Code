class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ans;
        
        for (int i = 0; i < asteroids.size(); i++) {
            bool exploded = false;
            
            while (!ans.empty() && asteroids[i] < 0 && ans.top() > 0) {
                
                if (abs(asteroids[i]) > abs(ans.top())) {
                    ans.pop(); 
                } 
                else if (abs(asteroids[i]) == abs(ans.top())) {
                    ans.pop(); 
                    exploded = true;
                    break;
                } 
                else {
                    exploded = true;
                    break;
                }
            }
            
            if (!exploded) {
                ans.push(asteroids[i]);
            }
        }
        
        vector<int> res;
        while (!ans.empty()) {
            res.push_back(ans.top());
            ans.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};
