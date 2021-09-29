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

    vector<int> row(h), column(w);

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            row[i] += a[i][j];
        }
    }

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            column[i] += a[j][i];
        }
    }

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cout << row[i] + column[j] - a[i][j] << " ";
        }
        cout << endl;
    }
}