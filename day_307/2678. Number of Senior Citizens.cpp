class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int ans = 0;
        
        for(string str : details){
            string temp = str.substr(11, 2);
            
            int number = stoi(temp);
            
            if(number > 60) ans++;
        }
        
        return ans;
        
    }
};