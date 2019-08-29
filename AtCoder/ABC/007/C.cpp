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

    int d[r][c]; //スタート位置からの距離を持つ配列
    //配列を初期化しておく
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            d[i][j] = -1;
        }
    }

    queue<pair<int, int>> que;

    //スタート地点をキューに入れ、距離を0にする
    que.push(pair<sx, sy>);
    d[sx][sy] = 0;

    while (!que.empty()) {

    }
}