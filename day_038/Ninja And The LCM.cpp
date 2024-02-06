#include <bits/stdc++.h>

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long LCM(long long x, long long y) {
    if (x == 0 || y == 0) {
        return 0;
    }
    return (x * y) / gcd(x, y);
}

   