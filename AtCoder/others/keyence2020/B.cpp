#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<pair<ll, ll>> p(n);

    for (ll i = 0; i < n; ++i) {
        ll x, l; cin >> x >> l;

        p[i] = make_pair(x, l);
    }

    sort(p.begin(), p.end());

    if (n <= 2) {
        ll sum = 0ll;

        if (p[0].first + p[0].second > p[1].first - p[1].second) {
            ++sum;
        }

        cout << n - sum << endl;
        return 0;
    } else {
        ll sum1 = 0ll;

        for (ll i = 1; i < n; ++i) {
            if (p[i-1].first + p[i-1].second >= p[i].first - p[i].second) {
                ++sum1;

                for (ll j = i+1; j < n; ++j) {
                    if (p[i-1].first + p[i-1].second >= p[j].first - p[j].second) {
                        ++sum1;
                    } else {
                        i = j+1;
                        break;
                    }
                }
            }
        }

        cout << n - sum1 << endl;
    }
}