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

    sort(a.rbegin(), a.rend());

    ll mid = a[0] / 2;

    ll t = LINF;

    ll ans;

    for (ll i = 1; i < n; ++i) {
        if (abs(mid - a[i]) < t) {
            t = abs(mid - a[i]);
            ans = a[i];
        }
    }

    cout << a[0] << ' ' << ans << endl;
}