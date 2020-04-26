#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b, c, d; cin >> a >> b >> c >> d;

    bool taka_turn = true;

    while (a > 0 && c > 0) {
        if (taka_turn) {
            if (c - b <= 0) {
                puts("Yes");
                return 0;
            }

            c -= b;
            taka_turn = false;
        } else {
            if (a - d <= 0) {
                puts("No");
                return 0;
            }

            a -= d;
            taka_turn = true;
        }
    }
}