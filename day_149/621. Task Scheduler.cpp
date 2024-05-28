class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       
        unordered_map<char, int> count;
        
        for(auto c : tasks) {
            count[c]++;
        }

        priority_queue<int> pq;
        
        for(auto c: count) {
            pq.push(c.second);
        }
        
        int res = 0;

        while(!pq.empty()) {
            int time = 0;
            vector<int> tmp;
            for(int i = 0; i < n + 1; i++) {
                if(!pq.empty()) {
                    tmp.push_back(pq.top() - 1);
                    pq.pop();
                    time++;
                }
            }
            for(auto t : tmp) {
                if(t) pq.push(t);
            }   
            
            res += pq.empty() ? time : n + 1;
        }
        
        return res;
        
    }

};