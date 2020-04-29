#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

int main() {

    int h, w; cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    vector<string> res(h, "");
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (s[i][j] == '#') {
                //8方向を確認する
                bool ok = true;
                for (int k = 0; k < 8; ++k) {
                    for (int l = 0; l < 8; ++l) {
                        int nx = i + dx[k];
                        int ny = j + dy[l];
                        if (nx < 0 || h <= nx || ny < 0 || w <= ny) continue;
                        if (s[nx][ny] == '.') ok = false;
                    }
                }

                if (ok) {
                    res[i] += '#';
                } else {
                    res[i] += '.';
                }
            } else {
                res[i] += '.';
            }
        }
    }

    vector<string> reverse = res;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (res[i][j] == '#') {
                //8方向を#で埋める
                for (int k = 0; k < 8; ++k) {
                    for (int l = 0; l < 8; ++l) {
                        int nx = i + dx[k];
                        int ny = j + dy[l];
                        if (nx < 0 || h <= nx || ny < 0 || w <= ny) continue;
                        reverse[nx][ny] = '#';
                    }
                }
            }
        }
    }

    bool ok = true;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (s[i][j] != reverse[i][j]) ok = false;
        }
    }

    if (ok) {
        puts("possible");
        for (int i = 0; i < h; ++i) {
            cout << res[i] << endl;
        }
    } else {
        puts("impossible");
    }
}