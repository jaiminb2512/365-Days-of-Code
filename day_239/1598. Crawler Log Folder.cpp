class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int step = 0;
    
        for(string log : logs){
            if(log == "../") {
                if(step > 0) step--;
            }
            
            else if(log != "./") step++;
                
        }
        
        return step;
        
    }
};