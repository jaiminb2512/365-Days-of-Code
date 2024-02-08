#include <bits/stdc++.h> 

const long long MOD = 1000000007;


int fibonacciNumber(int n){
    if (n <= 1) {
        return n;
    }

    vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }

    return fib[n];
}