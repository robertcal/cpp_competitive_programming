#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    int g[10][10] = {};

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i != j) {
                g[i][j] = INF;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;

        g[a][b] = 1;
        g[b][a] = 1;
    }

    //ワーシャルフロイド
    for (int k = 0; k < 10; ++k) {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        int ans = 0;

        for (int j = 0; j < n; ++j) {
            if (g[i][j] == 2) {
                ++ans;
            }
        }

        cout << ans << endl;
    }
}