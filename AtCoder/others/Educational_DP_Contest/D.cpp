#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

//関数内に大きな配列はNG
ll dp[110][100100] = {0};

int main() {

    ll N, W; cin >> N >> W;

    vector<ll> w(N);
    vector<ll> v(N);
    for (ll i = 0; i < N; ++i) {
        cin >> w[i] >> v[i];
    }

    for (ll i = 0; i < N; ++i) {
        for (ll j = 0; j <= W; ++j) {
            if (j + w[i] <= W) {
                dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j] + v[i]);
            }

            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        }
    }

    ll ans = 0;

    for (ll i = 0; i <= W; ++i) {
        ans = max(ans, dp[N][i]);
    }

    cout << ans << endl;
}