class Solution {
public:
    
    string invert(string str) {
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '1') str[i] = '0';
            else str[i] = '1';
        }
        return str;
    }
    
    string reverse(string str) {
        int s = 0;
        int e = str.length() - 1;
        
        while(s < e) {
            swap(str[s], str[e]);
            s++;
            e--;
        }
        
        return str;
    }
    
    char findKthBit(int n, int k) {
        
        string prev = "0";  
        
        for(int i = 2; i <= n; i++) {
            
            string temp = invert(prev);  
            temp = reverse(temp);         
            prev = prev + "1" + temp;     
        }
        
        return prev[k - 1]; 
    }
};
