#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m, x; cin >> n >> m >> x;
    vector<ll> c(n);
    vector<vector<ll>> a(n, vector<ll>(m));

    for (int i = 0; i < n; ++i) {
        cin >> c[i];
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    //bit
    ll ans = LINF;

    for (ll bit = 0; bit < (1 << n); ++bit) {
        vector<ll> score(m, 0);
        ll sum = 0;

        for (int i = 0; i < n; ++i) {
            if (bit & (1 << i)) {
                sum += c[i];

                for (int j = 0; j < m; ++j) {
                    score[j] += a[i][j];
                }
            }
        }

        bool ok = true;
        for (int i = 0; i < m; ++i) {
            if (score[i] < x) ok = false;
        }

        if (ok) {
            ans = min(ans, sum);
        }
    }

    if (ans == LINF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
}