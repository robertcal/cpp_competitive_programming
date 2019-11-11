#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, m; cin >> n >> m;

    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    vector<ll> c(m);
    vector<ll> d(m);
    for (ll i = 0; i < m; ++i) {
        cin >> c[i] >> d[i];
    }

    for (ll i = 0; i < n; ++i) {
        pair<ll, ll> point = make_pair(0, 1LL<< 60);

        for (ll j = 0; j < m; ++j) {
            ll m = abs(c[j] - a[i]) + abs(d[j] - b[i]);

            if (m < point.second) {
                point.first = j;
                point.second = m;
            }
        }

        cout << point.first + 1 << endl;
    }
}