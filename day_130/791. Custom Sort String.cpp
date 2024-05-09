class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }

        string result = "";
        for (char ch : order) {
            if (freq.count(ch)) {
                result += string(freq[ch], ch);
                freq.erase(ch); 
            }
        }

        for (auto &[ch, count] : freq) {
            result += string(count, ch);
        }

        return result;
    }
};