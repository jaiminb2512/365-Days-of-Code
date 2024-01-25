#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}
