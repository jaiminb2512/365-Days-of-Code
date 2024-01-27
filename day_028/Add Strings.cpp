#include <bits/stdc++.h> 
string stringSum(string &num1, string &num2) {
    string result;
    int carry = 0;

    for (int i = num1.size() - 1, j = num2.size() - 1; i >= 0 || j >= 0 || carry; --i, --j) {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int currentSum = digit1 + digit2 + carry;

        carry = currentSum / 10;

        result.push_back((currentSum % 10) + '0');
    }

     reverse(result.begin(), result.end());

    return result;
}