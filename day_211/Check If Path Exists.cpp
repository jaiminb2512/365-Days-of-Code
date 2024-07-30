#include <bits/stdc++.h> 

bool isReachable(int source, int destination, vector<vector<int>> &adjList, vector<bool> &visited) {
    visited[source] = true;
    if (source == destination) {
        return true;
    }
    for (int neighbor : adjList[source]) {
        if (!visited[neighbor] && isReachable(neighbor, destination, adjList, visited)) {
            return true;
        }
    }
    return false;
}

bool checkPathExists(int v, int e, int source, int destination, vector<vector<int>> &edges) {
    vector<vector<int>> adjList(v);
    for (int i = 0; i < e; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adjList[u].push_back(v);
    }
    vector<bool> visited(v, false);
    return isReachable(source, destination, adjList, visited);
}
