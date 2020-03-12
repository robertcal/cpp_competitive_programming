#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll x(ll n) {
    ll res = 0;

    ll s = n / 4 * 4;

    for (ll i = s; i <= n; ++i) {
        res ^= i;
    }

    return res;
}

int main() {

    ll a, b;
    cin >> a >> b;

    ll ans = x(b) ^ x(a - 1);

    cout << ans << endl;
}