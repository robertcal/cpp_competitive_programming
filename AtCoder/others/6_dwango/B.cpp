#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> x(n);
    for (ll i = 0; i < n; ++i) {
        cin >> x[i];
    }

    vector<ll> s(n);
    s[n-1] = 0;
    for (ll i = n-2; i >= 0; --i) {
        s[i] += s[i+1] + (x[i+1] - x[i]);
    }

    ll ans = 0;

    for (ll i = n-2; i >= 0; --i) {
        ans += (ans * (i + 1)) % MOD + (s[i] * (i + 1)) % MOD;
        ans %= MOD;
    }

    for (ll i = n-3; i >= 0; --i) {
        ans -= s[i+1];
    }

    cout << ans << endl;
}