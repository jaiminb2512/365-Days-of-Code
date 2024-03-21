#include <iostream>
#include <vector>
#include <string>

void findAllPathsHelper(vector<vector<bool>>& arr, int x, int y, int N, string path, vector<string>& paths) {
    
    if (x < 0 || y < 0 || x >= N || y >= N || !arr[x][y])
        return;
    
    if (x == N - 1 && y == N - 1) {
        paths.push_back(path);
        return;
    }
    
    arr[x][y] = false;
    
    findAllPathsHelper(arr, x + 1, y, N, path + "D", paths); 
    findAllPathsHelper(arr, x, y + 1, N, path + "R", paths); 
    findAllPathsHelper(arr, x - 1, y, N, path + "U", paths); 
    findAllPathsHelper(arr, x, y - 1, N, path + "L", paths); 
    
    arr[x][y] = true;
}

vector<string> findAllPaths(vector<vector<bool>>& arr) {
    int N = arr.size();
    vector<string> paths;
    
    findAllPathsHelper(arr, 0, 0, N, "", paths);
    
    return paths;
}