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

    //しゃくとり法
    ll ans = 0;
    ll r = 0;
    ll mul = 1;
    for (ll i = 0; i < n; ++i) {
        while (r < n && mul * s[r] <= k) {
            mul *= s[r];
            ++r;
        }

        if (ans < r - i) ans = r - i;
        if (i == r) {
            ++r;
        } else {
            mul /= s[i];
        }
    }

    cout << ans << endl;
}