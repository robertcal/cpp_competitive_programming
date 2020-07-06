#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int n, m;
struct edge {
    int to, cost;
};
vector<vector<edge>> g;
vector<vector<int>> done_r;
vector<int> done_t;

int ans = INF;

void dfs(int s, vector<int> donet, vector<vector<int>> doner, int sum) {
    bool done = true;
    for (int i = 0; i < n; ++i) {
        if (donet[i] == 0) done = false;
    }

    if (done && s == 0) {
        ans = min(ans, sum);
        return;
    }

    for (auto p : g[s]) {
        if (doner[s][p.to] == 1 || doner[p.to][s] == 1) continue;

        int tmp = donet[p.to];
        donet[p.to] = 1;
        doner[s][p.to] = 1;
        doner[p.to][s] = 1;
        dfs(p.to, donet, doner, sum + p.cost);
        donet[p.to] = tmp;
        doner[s][p.to] = 0;
        doner[p.to][s] = 0;
    }
}

int main() {
    cin >> n >> m;

    g.resize(n);
    done_r.resize(n, vector<int>(n, 1));
    done_t.resize(n, 0);
    for (int i = 0; i < m; ++i) {
        int u, v, l; cin >> u >> v >> l;
        --u; --v;

        g[u].push_back(edge({v, l}));
        g[v].push_back(edge({u, l}));
        done_r[u][v] = 0;
        done_r[v][u] = 0;
    }

    dfs(0, done_t, done_r, 0);

    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
}