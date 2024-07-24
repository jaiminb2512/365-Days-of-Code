class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) return false;
        
        unordered_map<char, int> w1Map;
        unordered_map<char, int> w2Map;
        unordered_set<char> w1Set;
        unordered_set<char> w2Set;
        
        for (char ch : word1) {
            w1Map[ch]++;
            w1Set.insert(ch);
        }
        
        for (char ch : word2) {
            w2Map[ch]++;
            w2Set.insert(ch);
        }
        
        if (w1Set != w2Set) return false;
        
        vector<int> w1Freq, w2Freq;
        for (const auto& entry : w1Map) {
            w1Freq.push_back(entry.second);
        }
        
        for (const auto& entry : w2Map) {
            w2Freq.push_back(entry.second);
        }
        
        sort(w1Freq.begin(), w1Freq.end());
        sort(w2Freq.begin(), w2Freq.end());
        
        return w1Freq == w2Freq;
    }
};
