#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int dx[6] = {1, 0, -1, 1, -1, 0};
int dy[6] = {1, 1, 1, 0, 0, -1};

int main() {

    int n, x, y; cin >> n >> x >> y;
    x += 300;
    y += 300;

    int s[600][600] = {};
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        a += 300;
        b += 300;
        s[a][b] = 1;
    }

    int d[600][600];
    for (int i = 0; i < 600; ++i) {
        for (int j = 0; j < 600; ++j) {
            d[i][j] = INF;
        }
    }

    d[300][300] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(300, 300));

    while (!q.empty()) {
        auto p = q.front(); q.pop();

        for (int i = 0; i < 6; ++i) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

            if (nx < 0 || 600 <= nx || ny < 0 || 600 <= ny) continue;
            if (s[nx][ny] == 1) continue;

            if (d[p.first][p.second] + 1 < d[nx][ny]) {
                d[nx][ny] = d[p.first][p.second] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }

    if (d[x][y] == INF) {
        cout << -1 << endl;
    } else {
        cout << d[x][y] << endl;
    }
}