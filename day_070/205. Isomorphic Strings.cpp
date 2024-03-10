#include <unordered_map>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;
        
        int n = s.length();
        
        for (int i = 0; i < n; ++i) {
            char charS = s[i];
            char charT = t[i];
            
            if (sToT.find(charS) != sToT.end()) {
                if (sToT[charS] != charT) {
                    return false;
                }
            } else {
                sToT[charS] = charT;
            }
            
            if (tToS.find(charT) != tToS.end()) {
                if (tToS[charT] != charS) {
                    return false; 
                }
            } else {
                tToS[charT] = charS;
            }
        }
        
        return true; 
    }
};
