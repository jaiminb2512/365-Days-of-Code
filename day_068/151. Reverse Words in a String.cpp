#include <iostream>
#include <sstream>
#include <vector>

class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> words;
        stringstream ss(s);
        string word;
        
        while (ss >> word) {
            words.push_back(word);
        }
        
        
        reverse(words.begin(), words.end());
        
        string result;
        for (const string& w : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += w;
        }
        
        return result;
    }
};
