#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int n, m;
vector<vector<int>> g;
vector<int> cnt;

void dfs(int s, int pa = -1) {
    for (auto t : g[s]) {
        if (t == pa) continue;

        cnt[t]++;
        dfs(t, s);
    }
}

int main() {

    cin >> n >> m;
    g.resize(n);
    cnt.resize(n, 0);

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        a--; b--;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(0);

    int ans = INF;

    for (int i = 1; i < n; ++i) {
        ans = min(ans, cnt[i]);
    }

    cout << ans << endl;
}