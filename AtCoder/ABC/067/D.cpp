#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int n;
vector<vector<int>> g;
vector<int> dist_a;
vector<int> dist_b;

void dfs(int s, int p, vector<int> &dist) {
    for (auto t : g[s]) {
        if (t == p) continue;
        dist[t] = dist[s] + 1;
        dfs(t, s, dist);
    }
}

int main() {

    cin >> n;
    g.resize(n);
    dist_a.resize(n, 0);
    dist_b.resize(n, 0);
    for (int i = 0; i < n - 1; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    // dfs
    dfs(0, -1, dist_a);
    dfs( n - 1, -1, dist_b);

    int fennec = 0;
    int snuke = 0;
    for (int i = 1; i <= n - 2; ++i) {
        if (dist_a[i] <= dist_b[i]) {
            fennec++;
        } else {
            snuke++;
        }
    }

    // fennecとsnukeが同じ場合は、snukeの勝ちになる
    if (fennec > snuke) {
        puts("Fennec");
    } else {
        puts("Snuke");
    }
}
