class Solution {
public:
    int findComplement(int num) {
        int ans = 0;        
        int temp = num;
        string binary = "";
        
        while(temp != 0 || temp == 1){
            if(temp % 2 == 0) binary += '0';
            else binary += '1';
            temp /= 2;
        }
        
        for(int i=0; i<binary.length(); i++){
            if(binary[i] == '0') ans += pow(2, i);
        }
        
        return ans;
    }
};