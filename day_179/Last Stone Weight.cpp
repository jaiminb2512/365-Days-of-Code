#include <queue>

int weightOfLastStone(int arr[], int n)
{
    priority_queue<int> pq(arr, arr+n);

    while(pq.size() > 1){
        int y = pq.top();
        pq.pop();

        int x = pq.top();
        pq.pop();

        if(x != y) {
            pq.push(y - x);
        }
    }

    return pq.empty() ? 0: pq.top();
}