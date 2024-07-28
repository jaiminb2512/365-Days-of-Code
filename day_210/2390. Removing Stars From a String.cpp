class Solution {
public:
    string removeStars(string s) {
        stack<char> tans;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '*') {
                if (!tans.empty()) {
                    tans.pop(); 
                }
            } else {
                tans.push(s[i]);
            }
        }

        string ans = "";
        while(!tans.empty()) {
            ans += tans.top();
            tans.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
