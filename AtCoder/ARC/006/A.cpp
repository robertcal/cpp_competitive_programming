#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int e[6];
    for (int i = 0; i < 6; ++i) {
        cin >> e[i];
    }

    int b; cin >> b;

    int l[6];
    for (int i = 0; i < 6; ++i) {
        cin >> l[i];
    }

    int match = 0;

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (e[i] == l[j]) {
                ++match;
            }
        }
    }

    bool bonus = false;

    for (int i = 0; i < 6; ++i) {
        if (l[i] == b) {
            bonus = true;
        }
    }

    if (match == 6) {
        puts("1");
        return 0;
    }

    if (match == 5 && bonus) {
        puts("2");
        return 0;
    }

    if (match == 5) {
        puts("3");
        return 0;
    }

    if (match == 4) {
        puts("4");
        return 0;
    }

    if (match == 3) {
        puts("5");
        return 0;
    }

    puts("0");
}