#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    vector<vector<int>> g(n);

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        bool ok = true;
        for (auto t : g[i]) {
            if (h[i] <= h[t]) {
                ok = false;
                break;
            }
        }

        if (ok) ++ans;
    }

    cout << ans << endl;
}