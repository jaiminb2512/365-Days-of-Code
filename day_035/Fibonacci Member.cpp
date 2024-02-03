#include <cmath>

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

bool checkMember(int n) {
    // A number n is a Fibonacci number if (5 * n^2 + 4) or (5 * n^2 - 4) is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}