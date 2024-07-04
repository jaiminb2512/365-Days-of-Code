#include <bits/stdc++.h> 
int squareRoot(int a) {
    int s = 0;
    int e = a;

    while (s <= e) { 
        int mid = s + (e - s) / 2;

        long long square_of_mid = (long long)mid * mid;

        if (square_of_mid == a) return mid;
        else if (square_of_mid > a) e = mid - 1;
        else s = mid + 1;
    }

    return e;
}