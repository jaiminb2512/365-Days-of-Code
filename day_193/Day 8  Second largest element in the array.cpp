#include <vector>
#include <algorithm>
using namespace std;

int findSecondLargest(int n, vector<int> &arr) {
    int fmax = arr[0];
    int smax = INT_MIN;
    
    for(int i = 1; i < n; i++) {
        if (arr[i] > fmax) {
            smax = fmax;
            fmax = arr[i];
        } 
        
        else if (arr[i] > smax && arr[i] != fmax) {
            smax = arr[i];
        }
    }
    
    if (smax == INT_MIN) {
        return -1; 
    }
    
    return smax;
}
