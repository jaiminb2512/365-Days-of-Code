vector<int> minHeap(int n, vector<vector<int>>& q) {
    priority_queue<int, vector<int>, greater<int>> min_heap;
    vector<int> result;
    
    for (int i = 0; i < n; ++i) {
       
        if (q[i][0] == 0) {
            min_heap.push(q[i][1]);
        } 
        
        else if (q[i][0] == 1) {
            if (!min_heap.empty()) {
                result.push_back(min_heap.top());
                min_heap.pop();
            }
        }
    }
    
    return result;
}