#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll ans = 0;

    for (ll i = 0; i < 60; ++i) {
        ll sum = 0;
        ll one = 0;

        for (ll j = 0; j < n; ++j) {
            if ((a[j] >> i) & 1) {
                ++one;
            }
        }

        ll zero = n - one;
        sum = one * zero % MOD;

        for (ll j = 0; j < i; ++j) {
            sum = sum * 2 % MOD;
        }

        ans += sum;
        ans %= MOD;
    }

    cout << ans << endl;
}