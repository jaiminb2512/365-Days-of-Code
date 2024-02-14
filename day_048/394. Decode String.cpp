#include<stack>

class Solution {
public:
    string decodeString(string s) {
        
    stack<int> countStack;
    stack<string> resultStack;
    string currentString = "";
    int count = 0;

    for (char c : s) {
        if (isdigit(c)) {
            count = count * 10 + (c - '0');
        } else if (c == '[') {
            countStack.push(count);
            resultStack.push(currentString);
            count = 0;
            currentString = "";
        } else if (c == ']') {
            int repeatCount = countStack.top();
            countStack.pop();
            string decodedString = resultStack.top();
            resultStack.pop();

            for (int i = 0; i < repeatCount; i++) {
                decodedString += currentString;
            }

            currentString = decodedString;
        } else {
            currentString += c;
        }
    }

    return currentString;
        
    }
};