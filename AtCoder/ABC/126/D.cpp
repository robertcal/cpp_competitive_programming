#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<vector<pair<int, int>>> g;

vector<int> ans;

void dfs(int n, int par = -1) {
    for (auto t : g[n]) {
        if (ans[t.first] != -1) continue;
        if (t.first == par) continue;

        if (t.second % 2 == 0) {
            ans[t.first] = ans[n];
        } else {
            ans[t.first] = 1 - ans[n];
        }

        dfs(t.first, n);
    }
}

int main() {

    int n; cin >> n;

    ans.resize(n);
    for (int i = 0; i < n; ++i) {
        ans[i] = -1;
    }

    g.resize(n);
    for (int i = 0; i < n-1; ++i) {
        int u, v, w; cin >> u >> v >> w;
        --u; --v;

        g[u].push_back(make_pair(v, w));
        g[v].push_back(make_pair(u, w));
    }

    ans[0] = 0;
    dfs(0);

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << endl;
    }
}