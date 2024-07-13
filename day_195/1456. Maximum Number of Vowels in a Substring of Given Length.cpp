class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0;
        int count = 0;
        
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        for (int i = 0; i < k; ++i) {
            if (isVowel(s[i])) {
                count++;
            }
        }        
        
        ans = count;
        
        for (int i = k; i < s.length(); ++i) {
            if (isVowel(s[i])) {
                count++;
            }
            if (isVowel(s[i - k])) {
                count--;
            }
            ans = max(ans, count);
        }

        return ans;
    }
};
