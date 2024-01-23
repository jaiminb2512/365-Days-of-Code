class Solution {
public:
    int lengthOfLastWord(string s) {
    int length = 0;
    bool flag = false;
        
    for(int i=s.length()-1; i>=0; i--){

        if(s[i] == ' ' && flag == true){
            break;
        }
        
        else if(s[i]!=' '){
            flag=true;
            length++;
        }
    }
    
    return length;
    }
};