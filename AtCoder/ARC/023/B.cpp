#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int r, c, d; cin >> r >> c >> d;
    vector<vector<int>> a(r, vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }
    }

    int odd_mx = 0;
    int even_mx = 0;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i + j > d) continue;

            if ((i + j) % 2 == 1) {
                odd_mx = max(odd_mx, a[i][j]);
            } else {
                even_mx = max(even_mx, a[i][j]);
            }
        }
    }

    if (d % 2 == 1) {
        cout << odd_mx << endl;
    } else {
        cout << even_mx << endl;
    }
}