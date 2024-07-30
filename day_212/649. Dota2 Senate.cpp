class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int> rq,sq;
        int n  = s.length();
        for(int i = 0;i<n; i++)
        {
            if(s[i]=='R')
                rq.push(i);
            else
                sq.push(i);
        }
        
        while(!rq.empty() && !sq.empty())
        {
            int i = rq.front();
            int j = sq.front();
            
            rq.pop();
            sq.pop();
           
            if(i<j)
            {
                rq.push(i+n);
            }
            else
                sq.push(j+n);
        }
     
        if(!rq.empty())
            return "Radiant";
        return "Dire";
    }
};