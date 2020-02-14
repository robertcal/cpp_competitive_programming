#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<vector<int>> f(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 10; ++j) {
            int a; cin >> a;
            f[i].push_back(a);
        }
    }

    vector<vector<int>> p(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 11; ++j) {
            int a; cin >> a;
            p[i].push_back(a);
        }
    }

    int ans = -INF;

    for (int bit = 1; bit < (1 << 10); ++bit) {
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            int match = 0;

            for (int j = 0; j < 10; ++j) {
                if (bit & (1 << j) && f[i][j]) {
                    ++match;
                }
            }

            sum += p[i][match];
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
}