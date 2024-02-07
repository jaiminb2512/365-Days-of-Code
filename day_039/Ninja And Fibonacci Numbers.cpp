#include <bits/stdc++.h> 
int findMinFibonacciNumbers(int sum) {
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(1);
    
    while (fib.back() < sum) {
        int next = fib[fib.size() - 1] + fib[fib.size() - 2];
        fib.push_back(next);
    }

    int count = 0;
    int idx = fib.size() - 1;
    
    while (sum > 0) {
        while (fib[idx] > sum) {
            idx--;
        }
        
        sum -= fib[idx];
        count++;
    }

    return count;
}
