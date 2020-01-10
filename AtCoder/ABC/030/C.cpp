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

    ll t = a[0] + x;
    ll p = 1;
    ll ans = 0;

    ll n_p = 0;
    ll m_p = 0;

    bool stop = false;

    while (!stop) {
        stop = true;

        if (p == 1) {
            for (ll i = m_p; i < m; ++i) {
                if (t <= b[i]) {
                    t = b[i] + y;
                    p = 0;
                    m_p = i;
                    ++ans;
                    stop = false;
                    break;
                }
            }
        } else {
            for (ll i = n_p; i < n; ++i) {
                if (t <= a[i]) {
                    t = a[i] + x;
                    p = 1;
                    n_p = i;
                    stop = false;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}