#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int h, w;
vector<vector<int>> a;

int sum = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<pair<int, int>> bfs(int x, int y) {
    vector<pair<int, int>> d[h][w];

    queue<pair<int, int>> que;
    que.push(make_pair(x, y));

    while (!que.empty()) {
        pair<int, int> t;
        t = que.front();
        que.pop();

        int sx = t.first;
        int sy = t.second;

        if (!(sx == x && sy == y) && a[sx][sy] % 2 == 1) {
            return d[sx][sy];
        }

        for (int i = 0; i < 4; ++i) {
            int nx = sx + dx[i];
            int ny = sy + dy[i];

            if (nx < 0 || h - 1 < nx || ny < 0 || w - 1 < ny) continue;

            if (!d[nx][ny].empty()) continue;

            que.push(make_pair(nx, ny));
            d[nx][ny] = d[sx][sy];
            d[nx][ny].push_back(make_pair(dx[i], dy[i]));
        }
    }
}

int main() {

    cin >> h >> w;
    a.resize(h, vector<int>(w));

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    bool conti = (sum % 2 == 1);

    int n = 0;

    vector<pair<int, int>> ans;

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (a[i][j] % 2 == 1) {
                if (conti) {
                    conti = false;
                    continue;
                }

                //bfs
                vector<pair<int, int>> res;
                res = bfs(i, j);
                n += res.size();

                int x = i;
                int y = j;
                for (auto p : res) {
                    ans.push_back(make_pair(x+1, y+1));

                    a[x][y]--;

                    x += p.first;
                    y += p.second;
                    ans.push_back(make_pair(x+1, y+1));

                    a[x][y]++;
                }
            }
        }
    }

    cout << n << endl;

    int i = 0;

    for (auto p : ans) {
        if (i >= 2 && i % 2 == 0) {
            cout << endl;
        }

        cout << p.first << ' ' << p.second << ' ';
        ++i;
    }
}