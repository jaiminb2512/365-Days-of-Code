#include <bits/stdc++.h> 

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

bool findRedundantBrackets(string &s) {
    stack<char> st;

    for (char c : s) {
        if (c == ')') {
            bool foundOperator = false;
            while (!st.empty() && st.top() != '(') {
                if (isOperator(st.top())) {
                    foundOperator = true;
                }
                st.pop();
            }

            if (!foundOperator) {
                return true;
            }

            st.pop(); 
        } else {
            st.push(c);
        }
    }

    return false;
}