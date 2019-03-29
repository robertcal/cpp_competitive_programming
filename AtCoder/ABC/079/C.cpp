#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;
    vector<int> N(4);
    N[0] = S[0] - '0';
    N[1] = S[1] - '0';
    N[2] = S[2] - '0';
    N[3] = S[3] - '0';

    for (int bit = 0; bit < (1 << 3); ++bit) {
        int sum = N[0];
        vector<char> OP(3);

        for (int i = 0; i < 3; ++i) {
            if (bit & (1 << i)) {
                sum += N[i+1];
                OP.push_back('+');
            } else {
                sum -= N[i+1];
                OP.push_back('-');
            }
        }

        if (sum == 7) {
            cout << S[0] + OP[0] + S[1] + OP[1] + S[2] + OP[2] + S[3] + "=7" << endl;
            return 0;
        }
    }
}

