#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, l; cin >> n >> l;

    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    vector<int> h(l + 10, 0); // ハードルのある場所
    for (int i = 0; i < n; ++i) {
        h[x[i]] = 1;
    }

    int t1, t2, t3; cin >> t1 >> t2 >> t3;

    vector<int> dp(l + 10, INF); // dp[x] = 座標xに接地する際の最短の秒数
    dp[0] = 0;

    for (int i = 0; i < l; ++i) {
        dp[i + 1] = min(dp[i + 1], dp[i] + t1 + t3 * h[i + 1]);
        dp[i + 2] = min(dp[i + 2], dp[i] + t1 + t2 + t3 * h[i + 2]);
        dp[i + 4] = min(dp[i + 4], dp[i] + t1 + t2 * 3 + t3 * h[i + 4]);

        // ジャンプ中にlを通過する場合
        if (i + 1 == l) dp[l] = min(dp[l], dp[i] + t1 / 2 + t2 / 2);
        if (i + 2 == l) dp[l] = min(dp[l], dp[i] + t1 / 2 + t2 + t2 / 2);
        if (i + 3 == l) dp[l] = min(dp[l], dp[i] + t1 / 2 + t2 + t2 + t2 / 2);
    }

    cout << dp[l] << endl;
}