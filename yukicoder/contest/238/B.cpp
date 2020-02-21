#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<vector<int>> g;

vector<int> dep;

void f(int s, int d, int p = -1) {
    if (d != 0) {
        dep.push_back(d);
    }

    for (auto t : g[s]) {
        if (t == p) {
            continue;
        }

        f(t, d+1, s);
    }
}

int main() {

    int n, k; cin >> n >> k;

    g.resize(n);
    for (int i = 0; i < n-1; ++i) {
        int a, b; cin >> a >> b;
        --a;
        --b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    f(0, 0);

    if (dep.size() < k-1) {
        cout << -1 << endl;
        return 0;
    }

    sort(dep.begin(), dep.end());

    int ans = 0;
    for (int i = 0; i < k-1; ++i) {
        ans += dep[i];
    }

    cout << ans << endl;
}