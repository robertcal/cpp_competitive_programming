#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

bool ok[200010];
ll dp[100010] = {};

int main() {

    ll n; cin >> n;

    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; ++i) {
        ll k; cin >> k;
        a[i] = make_pair(k, i);
    }

    sort(a.rbegin(), a.rend());

    for (ll i = 0; i < 200010; ++i) {
        ok[i] = true;
    }

    ll t = n / 2; //選ぶ数

    ll cnt = 0;
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        if (cnt == t) break;

        if (ok[a[i].second]) {
            ans += a[i].first;

            ok[a[i].second] = false;
            if (a[i].second - 1 >= 0) ok[a[i].second - 1] = false;
            if (a[i].second + 1 < n) ok[a[i].second + 1] = false;

            ++cnt;
        }
    }

    cout << ans << endl;
}