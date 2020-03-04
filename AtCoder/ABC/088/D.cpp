#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {

    int h, w; cin >> h >> w;

    vector<string> s(h);

    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    //スタート位置からの距離
    vector<vector<int>> d(h, vector<int>(w));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            d[i][j] = -1;
        }
    }

    //BFS
    queue<pair<int, int>> que;

    que.push(make_pair(0, 0));
    d[0][0] = 0;

    while (!que.empty()) {
        pair<int, int> p = que.front();
        que.pop();

        //ゴール
        if (p.first == h - 1 && p.second == w - 1) break;

        //4方向
        for (int i = 0; i < 4; ++i) {
            int nx = p.second + dx[i];
            int ny = p.first + dy[i];

            if (nx < 0 || w - 1 < nx) continue;
            if (ny < 0 || h - 1 < ny) continue;

            if (s[ny][nx] == '#') continue;

            if (d[ny][nx] != -1) continue;

            que.push(make_pair(ny, nx));
            d[ny][nx] = d[p.first][p.second] + 1;
        }
    }

    if (d[h-1][w-1] == -1) {
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (s[i][j] == '.') ++ans;
        }
    }

    cout << ans - d[h-1][w-1] - 1 << endl;
}