#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;

    bool ok = true;
    int c_count = 0;
    for (int i = 0; i < S.size(); ++i) {
        if (i == 0) {
            if (S[i] != 'A') {
                ok = false;
            }
            continue;
        }

        if (i >= 2 && i <= S.size()-2) {
            if (S[i] == 'C') {
                ++c_count;
            }
            continue;
        }

        if (!islower(S[i])) {
            ok = false;
            break;
        }
    }

    if (ok && c_count == 1) {
        puts("AC");
    } else {
        puts("WA");
    }
}