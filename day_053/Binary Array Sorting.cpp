#include <iostream>
#include <vector>
#include <algorithm>

vector<int> sortBinaryArray(vector<int> arr, int n)  {
 	
	vector<int> ans;

	int ones = 0;

	for(int i=0; i < n; i++){
		if(arr[i] == 1){
			ones++;
		}
	}

	for(int i=0; i < (n-ones); i++){
		ans.push_back(0);
	}

	for(int i=0; i < ones; i++){
		ans.push_back(1);
	}

	return ans;
}