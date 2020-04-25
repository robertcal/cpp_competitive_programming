#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    vector<ll> s(n);
    bool zero = false;
    for (ll i = 0; i < n; ++i) {
        cin >> s[i];
        if (s[i] == 0) zero = true;
    }

    if (zero) {
        cout << n << endl;
        return 0;
    }

    ll ans = 0;

    for (ll i = 0; i < n; ++i) {
        ll t = s[i];
        if (t > k) continue;
        ll cnt = 1;
        for (ll j = i + 1; j < n; ++j) {
            t *= s[j];
            if (t > k) {
                break;
            } else {
                ++cnt;
            }
        }

        ans = max(ans, cnt);

        if (ans >= n - i) break;
    }

    cout << ans << endl;
}