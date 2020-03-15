#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<vector<int>> g;
vector<bool> memo;
bool flag;

int ans = 0;

void dfs(int n, int pa = -1) {
    for (auto t : g[n]) {
        if (t == pa) continue;

        if (memo[t]) {
            flag = false;
        } else {
            memo[t] = true;
            dfs(t, n);
        }
    }
}

int main() {

    int n, m; cin >> n >> m;

    g.resize(n);
    memo.resize(n, false);

    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        --u; --v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 0; i < n; ++i) {
        if (memo[i] == false) { //まだ行ったことのない点
            flag = true;
            dfs(i);

            if (flag) ++ans;
        }
    }

    cout << ans << endl;
}