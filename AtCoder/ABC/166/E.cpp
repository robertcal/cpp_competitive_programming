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
    for (ll i = 2; i < n; ++i) {
        for (ll j = 0; j < n; ++j) {
            if (j + i >= n) break;
            if (a[j] >= i) continue;

            if (a[j] + a[j + i] == i) ++ans;
        }
    }

    cout << ans << endl;
}