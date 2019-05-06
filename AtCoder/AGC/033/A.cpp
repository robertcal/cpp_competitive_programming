#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int H, W;
vector<string> fi;

int main() {
    cin >> H >> W;
    fi.resize(H);
    for (int i = 0; i < H; ++i) {
        cin >> fi[i];
    }

    vector<vector<int>> dist(H, vector<int>(W, -1)); //すべて-1の多次元配列
    using pint = pair<int, int>;
    queue<pint> que;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (fi[i][j] == '#') {
                dist[i][j] = 0;
                que.push(pint(i, j));
            }
        }
    }


}