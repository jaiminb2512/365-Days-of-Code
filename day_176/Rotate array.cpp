vector<int> rotateArray(vector<int>arr, int k) {
    
   k=k%arr.size();

    rotate(arr.begin(),arr.begin()+k,arr.end());

    return arr;
}
