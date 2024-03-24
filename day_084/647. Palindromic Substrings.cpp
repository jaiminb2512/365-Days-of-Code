class Solution {
public:
    
    bool isPalindrome(string s){
        int start = 0;
        int end = s.length() - 1;
        
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }
    
    int countSubstrings(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                if (isPalindrome(s.substr(i, j - i + 1))) {
                    count++;
                }
            }
        }
        return count;
    }
};