vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    
    vector<int> result;
    vector<bool> visited(n,false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while(!q.empty()){

        int CurrentVertex = q.front();
        q.pop();
        result.push_back(CurrentVertex);

        for(int neighbor : adj[CurrentVertex]){
            if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    return result;
}