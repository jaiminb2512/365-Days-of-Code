class Solution {
public:
    static int numberOfSubarrays(vector<int>& nums, int k) {
        const int n = nums.size();
        vector<int> cntOdds(n+1, 0); 

        for (int i = 0; i < n; i++) 
            cntOdds[i+1] = cntOdds[i] + (nums[i] & 1);

        int l=0, cnt=0;
        for (int r=0; r < n; r++) {
            while (l<=r && cntOdds[r+1] - cntOdds[l] > k) 
                l++;

            if (cntOdds[r+1]-cntOdds[l] == k) {
                int l0 = l;
            
                while (l0 <= r && cntOdds[r+1]-cntOdds[l0] == k) {
                    cnt++;
                    l0++;
                }
            }
        }
        return cnt;
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();