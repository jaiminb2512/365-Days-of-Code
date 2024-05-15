class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        sort(begin(deck), end(deck), greater<int>());
        deque<int> ans;
        
        for (auto &num : deck) {
            if (!ans.empty()) {
                ans.push_front(ans.back());
                ans.pop_back();
            }
            ans.push_front(num);
        }
        
        return vector<int> (begin(ans), end(ans));
    }
};