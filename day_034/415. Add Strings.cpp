class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        int digit_1 = 0;
        int digit_2 = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;
        std::string result = "";

        while (i >= 0 || j >= 0 || carry > 0) {
            digit_1 = (i >= 0) ? (num1[i] - '0') : 0;
            digit_2 = (j >= 0) ? (num2[j] - '0') : 0;
            int sum = digit_1 + digit_2 + carry;
            carry = sum / 10;
            result.push_back((sum % 10) + '0');
            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};