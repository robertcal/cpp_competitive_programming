#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> a_sum(n + 1, 0);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        a_sum[i + 1] += a_sum[i] + a[i];
    }

    vector<ll> b(m);
    vector<ll> b_sum(m + 1, 0);
    for (ll i = 0; i < m; ++i) {
        cin >> b[i];
        b_sum[i + 1] += b_sum[i] + b[i];
    }

    ll a_idx = 0;
    ll b_idx = 0;
    ll ans = 0;

    ll a_cnt = 0;
    ll b_cnt = 0;
    while (k >= 0) {
        for (ll i = a_idx + a_cnt; i <= n; ++i) {
            if (a_sum[i + 1] - a_sum[a_idx] <= k) a_cnt++;
        }

        for (ll i = b_idx + b_cnt; i <= m; ++i) {
            if (b_sum[i + 1] - b_sum[b_idx] <= k) b_cnt++;
        }

        if (a_cnt <= 1 && b_cnt <= 1) break;

        if (a_cnt < b_cnt) {
            k -= b[b_idx];
            b_idx++;
            b_cnt--;
        } else if (a_cnt > b_cnt) {
            k -= a[a_idx];
            a_idx++;
            a_cnt--;
        } else {
            if (a[a_idx] < b[b_idx]) {
                k -= a[a_idx];
                a_idx++;
                a_cnt--;
            } else {
                k -= b[b_idx];
                b_idx++;
                b_cnt--;
            }
        }
        ans++;
    }

    cout << ans << endl;
}