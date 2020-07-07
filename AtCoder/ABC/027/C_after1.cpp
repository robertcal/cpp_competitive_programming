#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    ll depth = 0;
    for (ll i = n; i > 0; i /= 2) {
        ++depth;
    }

    if (depth % 2 == 0) {
        bool takahashi = true;
        ll s = 1;

        while (s <= n) {
            if (takahashi) {
                s *= 2;
                takahashi = false;
            } else {
                s *= 2;
                s++;
                takahashi = true;
            }
        }

        if (takahashi) {
            puts("Takahashi");
        } else {
            puts("Aoki");
        }
    } else {
        bool takahashi = true;
        ll s = 1;

        while (s <= n) {
            if (takahashi) {
                s *= 2;
                s++;
                takahashi = false;
            } else {
                s *= 2;
                takahashi = true;
            }
        }

        if (takahashi) {
            puts("Takahashi");
        } else {
            puts("Aoki");
        }
    }
}