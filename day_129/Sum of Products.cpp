long long pairAndsum(int n, long long arr[]){

    long long ans = 0;

    for(int i=0; i<32; ++i){
        
        long long count = 0; 
        for(int j=0; j<n; ++j){
            count += (arr[j] >> i) & 1LL; 
        }
        ans += ((count * ((count - 1)) / 2) * 1LL << i);
    }

    return ans;
}