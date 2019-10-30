#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll N, W; cin >> N >> W;

    vector<ll> w(N);
    vector<ll> v(N);
    for (int i = 0; i < N; ++i) {
        cin >> w[i] >> v[i];
    }

    ll dp[110][100100] = {0};

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= W; ++j) {
            if (j + w[i] <= W) {
                dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j] + v[i]);
            }

            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        }
    }

    ll ans = 0;

    for (int i = 0; i <= W; ++i) {
        ans = max(ans, dp[N][i]);
    }

    cout << ans << endl;
}