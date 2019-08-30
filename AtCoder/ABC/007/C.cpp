#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    int r, c;
    cin >> r >> c;

    int sx, sy, gx, gy;
    cin >> sy >> sx >> gy >> gx;

    --sx, --sy, --gx, --gy; //0-indexに合わせるため、1減らす

    vector<string> f(r);
    for (int i = 0; i < r; ++i) {
        cin >> f[i];
    }

    int d[c][r]; //スタート位置からの距離を持つ配列
    //配列を初期化しておく
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
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
            if (0 <= nx && nx < c && 0 <= ny && ny < r && f[ny][nx] == '.' && d[nx][ny] == -1) {
                //移動できる場合はキューに入れて、その点の距離を設定
                que.push(pair<int, int>(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }

    cout << d[gx][gy] << endl;
}