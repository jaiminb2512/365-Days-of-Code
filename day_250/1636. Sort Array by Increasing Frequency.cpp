vector<int> freq(vector<int>& nums){
    unordered_map<int, int> freq;

    for(int i : nums){
        freq[num]++;
    }

    sort(nums.begin(), nums.end(), [&freq](int a, int b){
        if(freq[a] == freq[b]){
            return a > b;
        }

        return freq[a] < freq[b];
    });

    return ans;
}