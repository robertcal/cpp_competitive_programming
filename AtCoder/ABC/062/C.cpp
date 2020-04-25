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

    ll s[3] = {};
    if (h < w) {
        swap(h, w);
    }

    s[0] = h / 2 * w;
    s[1] = (h - h / 2) * (w / 2);
    s[2] = (h - h / 2) * (w - w / 2);

    ll mx = 0;
    ll mn = LINF;
    for (ll i = 0; i < 3; ++i) {
        mx = max(mx, s[i]);
        mn = min(mn, s[i]);
    }

    cout << mx - mn << endl;
}