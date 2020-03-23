#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, w, k; cin >> h >> w >> k;

    vector<string> s(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    vector<int> cnt(h);

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (s[i][j] == '#') cnt[i]++;
        }
    }

    vector<vector<int>> ans(h);

    int idx = 1;
    bool one = false;

    for (int i = 0; i < h; ++i) {
        if (cnt[i] == 0) continue;

        for (int j = 0; j < w; ++j) {
            int k = j;
            while (k < w) {
                if (one && s[i][k] == '#') {
                    break;
                } else if (!one && s[i][k] == '#') {
                    ans[i].push_back(idx);
                    one = true;
                } else {
                    ans[i].push_back(idx);
                }

                ++k;
            }

            j = k - 1;
            one = false;
            ++idx;
        }
    }

    for (int i = 0; i < h; ++i) {
        int tmp = i;

        while (ans[tmp].empty() && tmp < h) {
            ++tmp;
        }

        if (tmp == h) {
            --tmp;

            while (ans[tmp].empty() && tmp > 0) {
                --tmp;
            }
        }

        for (int j = 0; j < w; ++j) {
            cout << ans[tmp][j] << " ";
        }

        cout << endl;
    }
}