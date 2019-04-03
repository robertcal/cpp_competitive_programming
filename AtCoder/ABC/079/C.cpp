#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;

    for (int bit = 0; bit < (1 << 3); ++bit) {
        int sum = S[0] - '0';
        string word;
        word += S[0];

        for (int i = 0; i < 3; ++i) {
            if (bit & (1 << i)) {
                sum += S[i+1] - '0';
                word += '+';
                word += S[i+1];
            } else {
                sum -= S[i+1] - '0';
                word += '-';
                word += S[i+1];
            }
        }

        if (sum == 7) {
            cout << word + "=7" << endl;
            return 0;
        }
    }
}
