#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

bool g[55][55];
bool c[55];

void bfs(int p) {
    if (c[p]) {
        return;
    } else {
        c[p] = true;
    }

    for (int i = 0; i < 55; ++i) {
        if (g[p][i]) {
            bfs(i);
        }
    }
}

int main() {

    int n, m; cin >> n >> m;

    vector<int> a(m);
    vector<int> b(m);

    for (int i = 0; i < 55; ++i) {
        for (int j = 0; j < 55; ++j) {
            //隣接行列を一度全てfalseにする
            g[i][j] = false;
        }
    }

    for (int i = 0; i < m; ++i) {
        cin >> a[i] >> b[i];

        --a[i]; --b[i];

        //隣接行列
        g[a[i]][b[i]] = true;
        g[b[i]][a[i]] = true;
    }

    int ans = 0;

    //橋かどうか調べる
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < 55; ++j) {
            c[j] = false;
        }

        g[a[i]][b[i]] = false;
        g[b[i]][a[i]] = false;

        //bfsを使って調べる
        bfs(a[i]);

        if (!c[b[i]]) {
            ++ans;
        }

        //元に戻す
        g[a[i]][b[i]] = true;
        g[b[i]][a[i]] = true;
    }

    cout << ans << endl;
}