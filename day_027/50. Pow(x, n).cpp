class Solution {
private:
    double pow(double x, long long n) {
        if (n == 0) {
            return 1.0;
        }

        double temp = pow(x, n / 2);
        if (n % 2 == 0) {
            return temp * temp;
        } else {
            return x * temp * temp;
        }
    }

public:
    double myPow(double x, int n) {
        if (x == 0) {
            return 0.0;
        }

        long long exp = n; // Use long long to avoid overflow for INT_MIN
        if (n < 0) {
            x = 1.0 / x;
            exp = -exp;
        }

        return pow(x, exp);
    }
};
