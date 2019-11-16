#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

ll dp[1000010][1000010];

int main() {

    ll x, y; cin >> x >> y;

    dp[0][0] = 0;

    for (ll i = 0; i <= sqrt(x); ++i) {
        for (ll j = 0; j <= sqrt(y); ++j) {
            dp[i+1][j+2] = (dp[i][j] + 1) % 1000000007;
            dp[i+2][j+1] = (dp[i][j] + 1) % 1000000007;
        }
    }

    cout << dp[x][y] << endl;
}