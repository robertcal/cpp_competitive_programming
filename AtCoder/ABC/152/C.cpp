#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> p(n);
    for (ll i = 0; i < n; ++i) {
        cin >> p[i];
    }

    ll mi = p[0];

    ll ans = 0;

    for (ll i = 0; i < n; ++i) {
        if (mi >= p[i]) {
            ++ans;
        }

        mi = min(mi, p[i]);
    }

    cout << ans << endl;
}