#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, k; cin >> n >> k;

    vector<pair<ll, ll>> p(n);

    for (ll i = 0; i < n; ++i) {
        ll a, b; cin >> a >> b;

        p[i] = make_pair(a, b);
    }

    sort(p.begin(), p.end());

    ll cnt = 0;

    for (ll i = 0; i < n; ++i) {
        cnt += p[i].second;

        if (k <= cnt) {
            cout << p[i].first << endl;
            return 0;
        }
    }
}