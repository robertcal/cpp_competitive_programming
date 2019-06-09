#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int H, W; cin >> H >> W;

    vector<vector<int>> S(H, W);
    for (int i = 0; i < H; ++i) {
        string s; cin >> s;
        for (int j = 0; j < W; ++j) {
            S[i][j] = s[j];
        }
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (s[i][j] == '#') {
                continue;
            } else {

            }
        }
    }
}