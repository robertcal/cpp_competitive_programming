#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    int a, b; cin >> a >> b;

    bool takahashi = true;

    while (n > 0) {
        if (takahashi) {
            if (n <= a) {
                puts("Takahashi");
                return 0;
            }
            n -= 1;

            takahashi = false;
        } else {
            if (n <= a) {
                puts("Aoki");
                return 0;
            }
            n -= b;

            takahashi = true;
        }
    }
}