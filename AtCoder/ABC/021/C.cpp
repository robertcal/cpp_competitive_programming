#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    int a, b; cin >> a >> b;
    --a; --b;

    vector<vector<int>> g(n);
    vector<vector<int>> d(n, vector<int>(n, INF));
    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int x, y; cin >> x >> y;
        --x; --y;

        g[x].push_back(y);
        g[y].push_back(x);
        d[x][y] = 1;
        d[y][x] = 1;
    }

    // ワーシャルフロイド
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    int distance = d[a][b];

    ll ans = 1;
    set<int> k; // 候補
    for (auto p : g[a]) {
        k.insert(p);
    }
    for (int i = distance - 1; i >= 0; --i) {
        ll cnt = 0;
        set<int> tmp;
        for (auto p : k) {
            if (d[p][b] == i) {
                cnt++;
                for (auto pp : g[p]) {
                    tmp.insert(pp);
                }
            }
        }

        if (cnt != 0) {
            ans *= cnt;
            ans %= (ll)MOD;
        }

        k = tmp;
    }

    cout << ans << endl;
}
