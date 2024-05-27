class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {    
        
        int res=1;
        sort(points.begin(), points.end());
        int lp=points[0][1];
        
        for(auto it:points){
           if(it[0]>lp){
                res++;
                lp=it[1];
           }
        
            lp=min(lp, it[1]);
        }
        
        return res;
    }
    