#include <string>

class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string result = "";

        while (columnNumber > 0) {
          columnNumber--;

            char charDigit = 'A' + columnNumber % 26;
            result = charDigit + result;

            columnNumber /= 26;
        }

        return result;
    }
};
