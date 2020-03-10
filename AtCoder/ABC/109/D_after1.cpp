#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, w; cin >> h >> w;

    vector<vector<int>> a(h, vector<int>(w));

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> a[i][j];
        }
    }

    vector<tuple<int, int, int, int>> ans;

    for (int i = 0; i < h; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < w; ++j) {
                if (i == h-1 && j == w-1) continue;

                if (j == w-1) {
                    if (a[i][j] % 2 != 0) {
                        a[i][j]--;
                        a[i+1][j]++;

                        ans.push_back(make_tuple(i, j, i+1, j));
                    }
                } else {
                    if (a[i][j] % 2 != 0) {
                        a[i][j]--;
                        a[i][j+1]++;

                        ans.push_back(make_tuple(i, j, i, j+1));
                    }
                }
            }
        } else {
            for (int j = w-1; j >= 0; --j) {
                if (i == h-1 && j == 0) continue;

                if (j == 0) {
                    if (a[i][j] % 2 != 0) {
                        a[i][j]--;
                        a[i+1][j]++;

                        ans.push_back(make_tuple(i, j, i+1, j));
                    }
                } else {
                    if (a[i][j] % 2 != 0) {
                        a[i][j]--;
                        a[i][j-1]++;

                        ans.push_back(make_tuple(i, j, i, j-1));
                    }
                }
            }
        }
    }

    cout << ans.size() << endl;

    for (auto t : ans) {
        cout << get<0>(t)+1 << ' ' << get<1>(t)+1 << ' ' << get<2>(t)+1 << ' ' << get<3>(t)+1 << endl;
    }
}