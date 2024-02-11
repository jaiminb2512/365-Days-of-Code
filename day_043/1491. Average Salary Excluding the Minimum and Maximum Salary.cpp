#include <vector>

class Solution {
public:
    double average(std::vector<int>& salary) {
        double ans = 0;
        int min = salary[0];
        int max = salary[0];
        int sum = 0;
        int n = salary.size();
        
        for(int i = 0; i < n; i++){
            if(min > salary[i])
                min = salary[i];
            
            if(max < salary[i])
                max = salary[i];

            sum += salary[i];
        }
        
        sum = sum - min - max;
        
        ans = static_cast<double>(sum) / (n - 2);
        
        return ans;
    }
};
