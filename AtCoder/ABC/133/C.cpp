#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll l, r; cin >> l >> r;

    if (r - l >= 2020) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = LINF;
    for (ll i = l; i < r; ++i) {
        for (ll j = i+1; j <= r; ++j) {
            ans = min(ans, (i * j) % 2019);
        }
    }

    cout << ans << endl;
}