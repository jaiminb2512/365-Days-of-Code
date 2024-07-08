#include <bits/stdc++.h> 
using namespace std;

pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2, int n, int m) {
    set<int> set1(arr1.begin(), arr1.end());
    set<int> set2(arr2.begin(), arr2.end());
    
    set<int> intersection;
    for (int num : set1) {
        if (set2.count(num)) {
            intersection.insert(num);
        }
    }
    
    set<int> unionSet = set1;
    unionSet.insert(set2.begin(), set2.end());
    
    return {intersection.size(), unionSet.size()};
}