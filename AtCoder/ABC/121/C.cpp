#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m; cin >> n >> m;

    vector<pair<ll, ll>> p(n);
    for (ll i = 0; i < n; ++i) {
        ll a, b; cin >> a >> b;

        p[i] = make_pair(a, b);
    }

    sort(p.begin(), p.end());

    ll sum = 0;

    ll ans = 0;

    for (ll i = 0; i < n; ++i) {
        sum += p[i].second;

        if (sum > m) {
            ans += (m - (sum - p[i].second)) * p[i].first;
            break;
        } else {
            ans += p[i].second * p[i].first;
        }
    }

    cout << ans << endl;
}