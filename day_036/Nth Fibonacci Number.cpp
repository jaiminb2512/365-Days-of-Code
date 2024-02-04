#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1 || n == 2) {
        cout << "1" << endl;
        return 0;
    }

    vector<long long> fib(n + 1);

    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << fib[n] << endl;

    return 0;
}
