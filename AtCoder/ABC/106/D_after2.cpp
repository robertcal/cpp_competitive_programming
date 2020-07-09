#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m, q; cin >> n >> m >> q;

    vector<vector<int>> c(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < m; ++i) {
        int l, r; cin >> l >> r;
        --l; --r;

        c[l][r]++;
    }

    // 2次元累積和
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < n; ++j) {
            c[i][j + 1] += c[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n; ++j) {
            c[i + 1][j] += c[i][j];
        }
    }

    for (int i = 0; i < q; ++i) {
        int l, r; cin >> l >> r;
        --l; --r;

        cout << c[r + 1][r + 1] - c[r + 1][l] - c[l][r + 1] + c[l][l] << endl;
    }
}