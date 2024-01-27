class Solution {
public:
    bool judgeCircle(string moves) {
        int ans[2] = {0,0};
        
        for(int i=0; i<=moves.size()-1; i++){
        if(moves[i] == 'R'){
            ans[0] += 1;
        }
        
        else if(moves[i] == 'L'){
            ans[0] -= 1;
        }
            
        else if(moves[i] == 'U'){
            ans[1] += 1;
        }
            
        else if(moves[i] == 'D'){
            ans[1] -= 1;
        }  
        }
        
        if (ans[0] == 0 && ans[1] == 0){
                return true;
        }
        
        else{
            return false;
        }
    }
};