#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, d, k; cin >> n >> d >> k;

    vector<pair<ll, ll>> a(d);
    for (ll i = 0; i < d; ++i) {
        ll l, r; cin >> l >> r;

        a[i] = make_pair(l, r);
    }

    vector<pair<ll, ll>> b(k);
    for (ll i = 0; i < k; ++i) {
        ll s, t; cin >> s >> t;

        b[i] = make_pair(s, t);
    }

    for (ll i = 0; i < k; ++i) {
        if (b[i].first < b[i].second) {
            ll start = b[i].first;
            ll end = b[i].second;

            for (ll j = 0; j < d; ++j) {
                if (a[j].first <= start && start <= a[j].second) {
                    start = a[j].second;
                }

                if (start >= end) {
                    cout << j+1 << endl;
                    break;
                }
            }
        } else {
            ll start = b[i].first;
            ll end = b[i].second;

            for (ll j = 0; j < d; ++j) {
                if (a[j].first <= start && start <= a[j].second) {
                    start = a[j].first;
                }

                if (start <= end) {
                    cout << j+1 << endl;
                    break;
                }
            }
        }
    }
}