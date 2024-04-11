#include <bits/stdc++.h> 

string rearrangeString(string &str) {
    int n = str.size();
    vector<int> freq(26, 0);
    for (char c : str) {
        freq[c - 'a']++;
    }

    priority_queue<pair<int, char>> pq;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 0) {
            pq.push({freq[i], 'a' + i});
        }
    }

    string result = "";
    pair<int, char> prev = {-1, '$'}; 
    while (!pq.empty()) {
        pair<int, char> current = pq.top();
        pq.pop();
        
        result += current.second;
        
        current.first--;
        if (prev.first > 0) {
            pq.push(prev);
        }
        
        prev = current;
    }
    
    if (result.size() != n) {
        return "NO SOLUTION";
    }
    
    return result;
}