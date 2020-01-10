#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m; cin >> n >> m;
    ll x, y; cin >> x >> y;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<ll> b(m);
    for (ll i = 0; i < m; ++i) {
        cin >> b[i];
    }

    //二分探索で解く
    ll pos = 0;
    ll t = 0;
    ll ans = 0;

    while (true) {
        if (pos == 0) {
            //A空港
            auto it = lower_bound(a.begin(), a.end(), t);
            ll id = distance(a.begin(), it);
            if (id == n) { //イテレータの最後はnになる
                break;
            }
            pos = 1;
            t = a[id] + x;
        } else {
            //B空港
            auto it = lower_bound(b.begin(), b.end(), t);
            ll id = distance(b.begin(), it);
            if (id == m) { //イテレータの最後はmになる
                break;
            }
            pos = 0;
            t = b[id] + y;
            ++ans;
        }
    }

    cout << ans << endl;
}