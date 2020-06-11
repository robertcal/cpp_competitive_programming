#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m, q; cin >> n >> m >> q;

    vector<vector<int>> g(n);

    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        --u; --v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    for (int i = 0; i < q; ++i) {
        int num; cin >> num;

        if (num == 1) {
            int x; cin >> x;
            --x;

            cout << c[x] << endl;

            for (auto t : g[x]) {
                c[t] = c[x];
            }
        } else {
            int x, y; cin >> x >> y;
            --x;

            cout << c[x] << endl;
            c[x] = y;
        }
    }
}