#include <bits/stdc++.h>
long long int sumOrProduct(long long int n, long long int q) {
  long long int ans = 0;
  long long int mod = 1e9 + 7;
  if (q == 1) {
    ans = (n * (n + 1)) / 2;
  }

  else {
    ans = 1;
    for (long long int i = 1; i <= n; i++) {
      // Coverting ans into 10^9 + 7 formate
      i %= mod, ans %= mod;
      ans = (((ans * i) % mod) + mod) % mod;
    }
  }
  return ans;
}