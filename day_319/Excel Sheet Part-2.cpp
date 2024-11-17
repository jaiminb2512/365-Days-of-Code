#include <bits/stdc++.h> 
long long titleToNumber(string str) {
    int len = str.length();
    long long ans = 0;

    for (int i = 0; i < len; i++) {
        ans = ans * 26 + (str[i] - 'A' + 1);
    }

    return ans;
}