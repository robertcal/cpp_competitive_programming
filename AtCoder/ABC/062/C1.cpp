#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll h, w; cin >> h >> w;

    if (h % 3 == 0 || w % 3 == 0) {
        cout << 0 << endl;
        return 0;
    }

    if (h < 3) {
        cout << w % 3 << endl;
        return 0;
    }

    if (w < 3) {
        cout << h % 3 << endl;
        return 0;
    }

    ll ans = LINF;
    for (ll i = h / 2 - 1; i < h / 2 + 1; ++i) {
        for (ll j = w / 2 - 1; j < w / 2 + 1; ++j) {
            ll s[3] = {};
            s[0] = i * w;
            s[1] = (h - i) * j;
            s[2] = (h - j) * (w - j);

            ll mx = 0;
            ll mn = LINF;
            for (ll k = 0; k < 3; ++k) {
                mx = max(mx, s[k]);
                mn = min(mn, s[k]);
            }

            ans = min(ans, mx - mn);
        }
    }

    cout << ans << endl;
}