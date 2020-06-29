#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<ll> b(m);
    ll bs = 0;
    for (ll i = 0; i < m; ++i) {
        cin >> b[i];
        bs += b[i];
    }

    ll ans = 0;
    ll j = m;
    ll sum = 0;
    for (ll i = 0; i <= n; ++i) {
        ll cnt = i;
        if (i > 0) {
            sum += a[i - 1];
        }

        while (j >= 0) {
            if (sum + bs <= k) {
                ans = max(ans, cnt + j);
                break;
            }

            j--;
            bs -= b[j];
        }
    }

    cout << ans << endl;
}