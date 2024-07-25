#include <algorithm>

class Kthlargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int K;

    Kthlargest(int k, vector<int> &arr) {
        for(auto it : arr){
            if(pq.size() > k) pq.pop();
            pq.push(it);
        }

        K = k;
    }

    int add(int num) {
        pq.push(num);
        if(pq.size() > K){
            pq.pop();
        }

        return pq.top();
    }

};