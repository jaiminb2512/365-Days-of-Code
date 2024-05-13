class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& sa) {
            
        int ans = 0, n = s.size(), idx = 0, cnt = 0;
        
        bool flag;
        
        do{
            flag = false;
            for(auto &x : s){
                if(x == -1) continue;
                if(x == sa[idx]) idx++, x = -1, flag = true, cnt++;
            }
        }while(flag);
        
        return n - cnt;
    }
};