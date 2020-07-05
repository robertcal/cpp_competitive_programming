#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, w, k; cin >> h >> w >> k;
    vector<string> c(h);
    for (int i = 0; i < h; ++i) {
        cin >> c[i];
    }

    int ans = 0;
    for (int bit_h = 0; bit_h < (1 << h); ++bit_h) {
        for (int bit_w = 0; bit_w < (1 << w); ++bit_w) {
            vector<string> t = c;

            for (int i = 0; i < h; ++i) {
                if (bit_h & (1 << i)) {
                    for (int j = 0; j < w; ++j) {
                        t[i][j] = 'R';
                    }
                }
            }

            for (int i = 0; i < w; ++i) {
                if (bit_w & (1 << i)) {
                    for (int j = 0; j < h; ++j) {
                        t[j][i] = 'R';
                    }
                }
            }

            int sum = 0;
            for (int i = 0; i < h; ++i) {
                for (int j = 0; j < w; ++j) {
                    if (t[i][j] == '#') {
                        sum++;
                    }
                }
            }

            if (sum == k) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}