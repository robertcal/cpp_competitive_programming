#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int n;
vector<vector<int>> g;
vector<pair<int, int>> p;
int c[100010] = {};

int main() {

    cin >> n;
    g.resize(n);

    for (int i = 0; i < n - 1; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;

        p.push_back(make_pair(a, b));

        g[a].push_back(b);
        g[b].push_back(a);
    }

    int colors = 0;
    for (int i = 0; i < n; ++i) {
        colors = max(colors, (int)g[i].size());
    }

    cout << colors << endl;

    for (int i = 0; i < n - 1; ++i) {
        int a = p[i].first;
        int b = p[i].second;

        int mx = max(c[a], c[b]);

        if (colors < mx + 1) {
            cout << 1 << endl;
            c[a] = 1;
            c[b] = 1;
        } else {
            cout << mx + 1 << endl;
            c[a] = mx + 1;
            c[b] = mx + 1;
        }
    }
}