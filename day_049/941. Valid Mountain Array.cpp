#include <vector>

class Solution {
public:
    bool validMountainArray(std::vector<int>& arr) {
        int n = arr.size();
        
        if (n < 3) {
            return false;
        }
        
        int peak = 0;
        while (peak < n - 1 && arr[peak] < arr[peak + 1]) {
            peak++;
        }
        
        if (peak == 0 || peak == n - 1) {
            return false;
        }
        
        while (peak < n - 1 && arr[peak] > arr[peak + 1]) {
            peak++;
        }
        
        return peak == n - 1;
    }
};
