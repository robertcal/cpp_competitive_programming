#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int h, w;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

vector<string> s;

int bfs(int sx, int sy, int gx, int gy) {
    int d[w][h]; //スタート位置からの距離を持つ配列
    //配列を初期化しておく
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            d[i][j] = -1;
        }
    }

    queue<pair<int, int>> que;

    //スタート地点をキューに入れ、距離を0にする
    que.push(pair<int, int>(sx, sy));
    d[sx][sy] = 0;

    while (!que.empty()) {
        pair<int, int> p = que.front(); que.pop(); //キューの先頭を取り出す

        if (p.first == gx && p.second == gy) break; //取り出したものがゴールならば探索をやめる

        //4方向をループ
        for (int i = 0; i < 4; ++i) {
            //移動した後の点を(nx,ny)とする
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

            //移動できる場所か判定
            if (0 <= nx && nx < w && 0 <= ny && ny < h && s[ny][nx] == '.' && d[nx][ny] == -1) {
                //移動できる場合はキューに入れて、その点の距離を設定
                que.push(pair<int, int>(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }

    int res = 0;

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            res = max(res, d[i][j]);
        }
    }

    return res;
}

int main() {

    cin >> h >> w;

    s.resize(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    vector<pair<int, int>> p;

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (s[i][j] == '.') {
                p.push_back(make_pair(i,j));
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < p.size()-1; ++i) {
        for (int j = i+1; j < p.size(); ++j) {
            ans = max(ans, bfs(p[i].second, p[i].first, p[j].second, p[j].first));
        }
    }

    cout << ans << endl;
}