#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    vector<ll> h(n);

    for (ll i = 0; i < n; ++i) {
        cin >> h[i];
    }

    sort(h.rbegin(), h.rend());

    ll ans = 0;

    for (ll i = 0; i < n; ++i) {
        if (i <= k-1) {
            continue;
        }

        ans += h[i];
    }

    cout << ans << endl;
}