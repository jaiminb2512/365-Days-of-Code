class Solution {
public:
    int minimumLength(string s) {
        int start = 0;
        int end = s.length() - 1;

       while (start < end) {
            
           if (s[start] == s[end]) {
                
               while (start < end && s[start] == s[start + 1]) {
                    start++;
                }
                
               while (start < end && s[end] == s[end - 1]) {
                    end--;
                }
               
                start++;
                end--;
            } else {
                
               break;
            }
        }

        if(end - start + 1 < 0 )
            return 0;
        
        return end - start + 1;
    }
};
