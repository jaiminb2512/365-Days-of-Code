#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    int passes = n-1;
    
    for(int i=0; i<passes; i++){

        int min_index = i;

        for(int j=i; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        swap(arr[i], arr[min_index]);
    }
}