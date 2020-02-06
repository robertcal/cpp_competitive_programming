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

    ll s = 0;
    ll s_odd = 0;
    for (ll i = 0; i < n; ++i) {
        s += a[i];

        if (i % 2 != 0) {
            s_odd += a[i];
        }
    }

    vector<ll> ans(n);
    ans[0] = s - 2 * s_odd;

    for (ll i = 1; i < n; ++i) {
        ans[i] = 2 * a[i-1] - ans[i-1];
    }

    for (ll i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }

    cout << endl;
}