int isSorted(int n, vector<int> a) {
    
    int ans = 1;

    for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]) ans = 0;
    }

    return ans;
}
