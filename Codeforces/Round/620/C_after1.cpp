#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int q; cin >> q;

    for (int i = 0; i < q; ++i) {
        int n, m; cin >> n >> m;

        vector<int> t(n);
        vector<int> l(n);
        vector<int> h(n);

        for (int j = 0; j < n; ++j) {
            cin >> t[j] >> l[j] >> h[j];
        }

        bool ok = true;

        int mn, mx;
        mn = m; mx = m;
        int t_before = 0;

        for (int j = 0; j < n; ++j) {
            mn -= t[j] - t_before;
            mx += t[j] - t_before;

            if (mx < l[j] || h[j] < mn) { //この条件が意外と難しい
                ok = false;
                break;
            } else {
                mn = max(mn, l[j]);
                mx = min(mx, h[j]);
                t_before = t[j];
            }
        }

        if (ok) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
}