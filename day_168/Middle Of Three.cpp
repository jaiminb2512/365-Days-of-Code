#include<bits/stdc++.h>
int middleOdThree(intx, int y, int z){

    vector<int> result;
    int maxi = x , ans= INT_MIN;

    result.push_back(x);
    result.push_back(y);
    result.push_back(z);

    for(int i=1; i<3; i++){

        if(result[i] > maxi){
            ans = maxi;
            maxi = result[i];
        }

        else if(result[i] > ans && result[i] != maxi){
            ans = result[i];
        }
    }

    return ans;
}