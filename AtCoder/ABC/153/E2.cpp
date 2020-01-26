#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int h, n;

int dp[10010][10010];

int main() {

    cin >> h >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < 10010; ++i) {
        for (int j = 0; j < 10010; ++j) {
            dp[i][j] = INF;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int t_h = 0; t_h <= h; ++t_h) {
            if (t_h >= b[i]) {
                dp[i+1][t_h] = min(dp[i][t_h-a[i]] + b[i], dp[i][t_h]);
            } else {
                dp[i+1][t_h] = dp[i][t_h];
            }
        }
    }

    int ans = 0;

}