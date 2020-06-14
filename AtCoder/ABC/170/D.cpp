#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; ++i) {
        ll t; cin >> t;
        a[i] = make_pair(t, 0);
    }

    sort(a.begin(), a.end());

    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        for (ll j = i + 1; j < n; ++j) {
            if (a[i].first == a[j].first) {
                a[i].second = 1;
                a[j].second = 1;
            } else {
                if (a[j].first % a[i].first == 0) {
                    a[j].second = 1;
                }
            }
        }
    }

    for (ll i = 0; i < n; ++i) {
        if (a[i].second == 0) ++ans;
    }

    cout << ans << endl;
}