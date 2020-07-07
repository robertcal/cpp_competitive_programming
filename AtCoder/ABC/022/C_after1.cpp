#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<vector<int>> d(n, vector<int>(n, INF));
    for (int i = 0; i < n; ++i) {
        d[i][i] = 0;
    }

    vector<pair<int, int>> st;
    for (int i = 0; i < m; ++i) {
        int u, v, l; cin >> u >> v >> l;
        --u; --v;

        if (u == 0 || v == 0) {
            if (u == 0) st.push_back(make_pair(v, l));
            if (v == 0) st.push_back(make_pair(u, l));
            continue;
        }

        d[u][v] = l;
        d[v][u] = l;
    }

    // ワーシャルフロイド
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    int ans = INF;
    for (int i = 0; i < st.size(); ++i) {
        for (int j = i + 1; j < st.size(); ++j) {
            ans = min(ans, d[st[i].first][st[j].first] + st[i].second + st[j].second);
        }
    }

    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
}