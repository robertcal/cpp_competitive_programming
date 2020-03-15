#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, d; cin >> n >> d;

    vector<vector<int>> x(n, vector<int>(d));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < d; ++j) {
            cin >> x[i][j];
        }
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int t = 0;
            for (int k = 0; k < d; ++k) {
                t += (x[j][k] - x[i][k]) * (x[j][k] - x[i][k]);
            }

            for (int l = 0; l < 20000; ++l) {
                if (l * l == t) ++ans;
            }
        }
    }

    cout << ans << endl;
}