#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<vector<int>> g(n);
    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> dist(n, INF);
    vector<int> pre(n, -1);

    queue<int> q;
    dist[0] = 0;
    q.push(0);

    while (!q.empty()) {
        int v = q.front(); q.pop();

        for (auto t : g[v]) {
            if (dist[t] != INF) continue;

            dist[t] = dist[v] + 1;
            pre[t] = v;
            q.push(t);
        }
    }

    cout << "Yes" << endl;
    for (int i = 0; i < n; ++i) {
        if (i == 0) continue;

        cout << pre[i] +  1 << endl;
    }
}