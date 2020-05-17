#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll get_add(ll x) {
    ll mn = 10;
    ll mx = 0;
    while (x > 0) {
        ll y = x % 10;
        x /= 10;
        mn = min(mn, y);
        mx = max(mx, y);
    }

    return mn * mx;
}

int main() {

    int t; cin >> t;

    while (t--) {
        ll x, k; cin >> x >> k;

        for (int i = 0; i < k - 1; ++i) {
            ll y = get_add(x);
            if (y == 0) {
                break;
            }
            x += y;
        }

        cout << x << endl;
    }
}