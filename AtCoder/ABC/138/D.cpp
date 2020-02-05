#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<vector<int>> g;

vector<int> counter;

void dfs(int cu, int pa = -1) {
    for (auto v : g[cu]) {
        if (v == pa) {
            continue;
        }

        counter[v] += counter[cu];

        dfs(v, cu);
    }
}

int main() {

    int n, q; cin >> n >> q;

    g.resize(n);
    for (int i = 0; i < n-1; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    counter.resize(n);

    for (int i = 0; i < q; ++i) {
        int p, x; cin >> p >> x;
        --p;

        counter[p] += x;
    }

    dfs(0);

    for (int i = 0; i < n; ++i) {
        cout << counter[i] << ' ';
    }

    cout << endl;
}