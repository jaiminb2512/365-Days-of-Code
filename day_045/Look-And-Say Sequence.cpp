#include <iostream>
#include <vector>

using namespace std;

string lookAndSaySequence(int n) {
    if (n == 1) {
        return "1";
    }

    string prevTerm = lookAndSaySequence(n - 1);
    string result = "";

    int count = 1;
    for (int i = 0; i < prevTerm.length(); ++i) {
        while (i < prevTerm.length() - 1 && prevTerm[i] == prevTerm[i + 1]) {
            count++;
            i++;
        }

        result += to_string(count) + prevTerm[i];
        count = 1;
    }

    return result;
}