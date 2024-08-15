class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size() - 1;
        int i = 0;
        
        while(i+2 <= n){
            
            if((arr[i] % 2 == 1) && (arr[i+1] % 2 == 1) && (arr[i+2] % 2 == 1)){
                return true;
            }
            
            i++;
        }
        
        return false;
    }
};