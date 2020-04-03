#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            g[i][j] = INF;
        }
    }


    for (int i = 0; i < m; ++i) {
        int a, b, t; cin >> a >> b >> t;
        --a; --b;

        g[a][b] = t;
        g[b][a] = t;
    }

    //ワーシャルフロイド
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    int mi = INF;
    int mi_idx = 0;

    for (int i = 0; i < n; ++i) {
        int g_mi = 0;

        for (int j = 0; j < n; ++j) {
            if (i == j) continue;

            g_mi = max(g_mi, g[i][j]);
        }

        if (g_mi < mi) {
            mi = g_mi;
            mi_idx = i;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (i == mi_idx) continue;

        ans = max(ans, g[mi_idx][i]);
    }

    cout << ans << endl;
}