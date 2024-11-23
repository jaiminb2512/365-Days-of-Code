#include <iostream>
#include <string>

class Solution {
public:
    int getLucky(string s, int k) {
        unordered_map<char, int> NumToChar = {
            {'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5},
            {'f', 6}, {'g', 7}, {'h', 8}, {'i', 9}, {'j', 10},
            {'k', 11}, {'l', 12}, {'m', 13}, {'n', 14}, {'o', 15},
            {'p', 16}, {'q', 17}, {'r', 18}, {'s', 19}, {'t', 20},
            {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24}, {'y', 25},
            {'z', 26}
        };
        
        string ans = "";
        for(char ch : s){
            int num = NumToChar[ch];
            ans += to_string(num);            
        }
        
        
        while(k--){
            int sum = 0;
            for(char ch : ans){
                sum += (ch - '0');
            }
            ans = to_string(sum);            
        } 
        
        return stoi(ans);
    }
};