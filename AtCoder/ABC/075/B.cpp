#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int h, w; cin >> h >> w;

    vector<string> s(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    int dh[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dw[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (s[i][j] == '.') {
                int cnt = 0;

                for (int k = 0; k < 8; ++k) {
                    if (0 <= i+dh[k] && i+dh[k] < h && 0 <= j+dw[k] && j+dw[k] < w && s[i+dh[k]][j+dw[k]] == '#') {
                        ++cnt;
                    }
                }

                s[i][j] = cnt + '0';
            }
        }
    }

    for (int i = 0; i < h; ++i) {
        cout << s[i] << endl;
    }
}