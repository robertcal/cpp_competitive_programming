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

    vector<ll> b(n);
    for (ll i = 0; i < n; ++i) {
        b[i] = a[i] - (i+1);
    }

    sort(b.begin(), b.end());

    ll t = b[n/2];

    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        ans += abs(b[i] - t);
    }

    cout << ans << endl;
}