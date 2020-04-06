#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; ++i) {
        int n; cin >> n;

        vector<vector<int>> m(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> m[i][j];
            }
        }

        int k = 0;
        for (int i = 0; i < n; ++i) {
            k += m[i][i];
        }

        int r = 0;
        for (int i = 0; i < n; ++i) {
            set<int> se;
            for (int j = 0; j < n; ++j) {
                if (se.count(m[i][j]) == 1) {
                    ++r;
                    break;
                } else {
                    se.insert(m[i][j]);
                }
            }
        }

        int c = 0;
        for (int i = 0; i < n; ++i) {
            set<int> se;
            for (int j = 0; j < n; ++j) {
                if (se.count(m[j][i]) == 1) {
                    ++c;
                    break;
                } else {
                    se.insert(m[j][i]);
                }
            }
        }

        cout << "Case #" << i + 1 << ": " << k << " " << r << " " << c << endl;
    }
}