#include <bits/stdc++.h> 

static bool comp(int a, int b){
        return __builtin_popcount(a) > __builtin_popcount(b); 
        
    }   
    
    
void sortSetBitsCount(vector<int> &arr, int size) {

    stable_sort(arr.begin(), arr.end(), comp);
}