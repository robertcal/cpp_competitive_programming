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
            //障害物ならスキップ
            if (S[i][j] == '#') {
                continue;
            }

            //既にカウントしたところならスキップ
            if (done[j]) {
                continue;
            }

            //障害物なしの長さをカウント
            int l = 0;
            while (j+l < W) {
                if (S[i][j+l] == '#') {
                    break;
                }
                ++l;
            }

            for (int k = 0; k < l; ++k) {
                cnt[i][j+k] += l;
                done[j+k] = 1;
            }
        }
    }

    //縦方向のカウント
    for (int j = 0; j < W; ++j) {
        vector<int> done(H);

        for (int i = 0; i < H; ++i) {
            //障害物ならスキップ
            if (S[i][j] == '#') {
                continue;
            }

            //既にカウントしたところならスキップ
            if (done[i]) {
                continue;
            }

            //障害物なしの長さをカウント
            int l = 0;
            while (i+l < H) {
                if (S[i+l][j] == '#') {
                    break;
                }
                ++l;
            }

            for (int k = 0; k < l; ++k) {
                cnt[i+k][j] += l;
                done[i+k] = 1;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            ans = max(ans, cnt[i][j] - 1);
        }
    }

    cout << ans << endl;
}