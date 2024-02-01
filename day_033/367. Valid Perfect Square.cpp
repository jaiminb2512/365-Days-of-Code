class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num == 0 || num == 1){
            return true;
        }
        
        for(int i=0; i<=(num/2); i++){
            if(num == (pow(i,2))){
                return true;
            }
        }
        return false;
    }
};