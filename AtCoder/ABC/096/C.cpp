#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};

int main() {

    int h, w; cin >> h >> w;

    vector<string> s(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    bool res = true;

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (s[i][j] == '#') {
                //4方向を確認
                bool find = false;

                for (int k = 0; k < 4; ++k) {
                    int nh = i + dh[k];
                    int nw = j + dw[k];

                    if (0 <= nh && nh < h && 0 <= nw && nw < w && s[nh][nw] == '#') {
                        find = true;
                    }
                }

                if (!find) {
                    res = false;
                }
            }
        }
    }

    if (res) {
        puts("Yes");
    } else {
        puts("No");
    }
}