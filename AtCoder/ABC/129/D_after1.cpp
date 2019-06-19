#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int H, W; cin >> H >> W;

    vector<string> S(H);
    for (int i = 0; i < H; ++i) {
        cin >> S[i];
    }

    //2次元配列
    vector<vector<int>> cnt(H, vector<int>(W));

    //横方向のカウント
    for (int i = 0; i < H; ++i) {
        vector<int> done(W);
        for (int j = 0; j < W; ++j) {
            if (S[i][j] == '#') {
                continue;
            }

            if (done[j]) {
                continue;
            }

            int l = 0;
            while (j+l < W) {
                if (S[i][j+1] == '#') {
                    break;
                }
                ++l;
            }

            for (int k = 0; k < l; ++k) {
                cnt[i][j+K] += l;
                done[j+K] = 1;
            }
        }
    }
}