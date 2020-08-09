#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // 二分探索
    ll l = 0; // NG側
    ll r = 1e9; // OK側

    while (r - l > 1) {
        ll m = (l + r) / 2;
        auto f = [&](ll x) {
            // 全丸太をx以下にするために切る回数
            ll count = 0;
            // 一本ずつ考えていけば良い
            for (ll i = 0; i < n; ++i) {
                count += (a[i] - 1) / x; // ここは具体例を考えて立式する
            }

            return count <= k;
        };

        if (f(m)) {
            r = m;
        } else {
            l = m;
        }
    }

    cout << r << endl;
}