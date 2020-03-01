#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<vector<int>> f;
vector<vector<int>> g;

vector<int> ans;

int main() {

    int n, m, k; cin >> n >> m >> k;

    f.resize(m);
    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        --a;
        --b;

        f[a].push_back(b);
        f[b].push_back(a);
    }

    g.resize(k);
    for (int i = 0; i < k; ++i) {
        int c, d; cin >> c >> d;
        --c;
        --d;

        g[c].push_back(d);
        g[d].push_back(c);
    }

    ans.resize(n);


}