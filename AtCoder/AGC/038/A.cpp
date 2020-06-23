#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, w, a, b;
    cin >> h >> w >> a >> b; //a, bに1を割り当てる

    vector<vector<int>> ans(h, vector<int>(w, 0));

    for (int i = 0; i < h; ++i) {
        for (int j = i; j < i + a; ++j) {
            int t;
            if (j >= w) {
                t = j - w;
            } else {
                t = j;
            }
            ans[i][t] = 1;
        }
    }

    for (int i = 0; i < w; ++i) {
        int sum = 0;
        for (int j = 0; j < h; ++j) {
            if (ans[j][i] == 1) sum++;
        }

        if (sum != b && sum != h - b) {
            puts("No");
            return 0;
        }
    }

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cout << ans[i][j];
        }

        cout << endl;
    }
}