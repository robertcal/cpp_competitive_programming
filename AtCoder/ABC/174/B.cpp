#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, d; cin >> n >> d;
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        ll x, y; cin >> x >> y;

        if (x * x + y * y <= d * d) {
            ans++;
        }
    }

    cout << ans << endl;
}