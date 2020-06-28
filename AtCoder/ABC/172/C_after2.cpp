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
    vector<ll> b_sum(m + 1, 0);
    for (ll i = 0; i < m; ++i) {
        cin >> b[i];
        b_sum[i + 1] = b_sum[i] + b[i];
    }

    ll ans = 0;
    ll sum = 0;
    for (ll i = -1; i < n; ++i) { // aが0個の場合も試す必要がある
        if (i >= 0) {
            sum += a[i];
        }
        ll cnt = i + 1;

        ll t = k - sum;
        if (t < 0) break;

        auto itr = upper_bound(b_sum.begin(), b_sum.end(), t);
        cnt += (itr - b_sum.begin()) - 1;
        ans = max(ans, cnt);
    }

    cout << ans << endl;
}