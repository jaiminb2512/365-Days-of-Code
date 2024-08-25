class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        double ans = 0;
        int current_time = 0;
        
        for(const auto& customer : customers){
            
            int arrival = customer[0];
            int service = customer[1];
            
            if(current_time < arrival){
                current_time = arrival;
            }
            
            int waiting_time = current_time - arrival + service;
            ans += waiting_time;
            current_time += service;
            
        }
        
        return ans/customers.size();
        
    }
};