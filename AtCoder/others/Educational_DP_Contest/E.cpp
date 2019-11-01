#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

ll weight[110], value[110];

ll dp[110][100100];

int main() {

    ll n, w; cin >> n >> w;

    for (ll i = 0; i < n; ++i) {
        cin >> weight[i] >> value[i];
    }

    for (ll i = 0; i < 110; ++i) {
        for (int j = 0; j < 100100; ++j) {
            dp[i][j] = 1LL<<60;
        }
    }

    dp[0][0] = 0;

    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < 100100; ++j) {
            //選ぶ
            if (j - value[i] >= 0) {
                dp[i+1][j] = min(dp[i+1][j], dp[i][j-value[i]] + weight[i]);
            }

            //選ばない
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        }
    }

    ll ans;

    for (ll i = 0; i < 100100; ++i) {
        if (dp[n][i] <= w) {
            ans = i;
        }
    }

    cout << ans << endl;
}