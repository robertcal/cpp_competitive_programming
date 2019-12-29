#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll dp[100010][3] = {};

int main() {

    ll n, k; cin >> n >> k;
    ll r, s, p; cin >> r >> s >> p;
    string t; cin >> t;

    //r:グーで0
    //s:チョキで1
    //p:パーで2

    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for (ll i = 1; i <= n; ++i) {
        if (t[i-1] == 's') { //敵がチョキ
            if (i - k >= 1) {
                dp[i-k][0] =
                dp[i][0] = max({dp[i-1][1] + r, dp[i-1][2] + r}); //グーで勝つ
                dp[i][1] = max({dp[i-1][0], dp[i-1][2]}); //チョキであいこ
                dp[i][2] = max({dp[i-1][0], dp[i-1][1]}); //パーで負け
            } else {
                dp[i][0] = max({dp[i-1][0] + r, dp[i-1][1] + r, dp[i-1][2] + r}); //グーで勝つ
                dp[i][1] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]}); //チョキであいこ
                dp[i][2] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]}); //パーで負け
            }
        }

        if (t[i-1] == 'p') { //敵がパー
            if (i - k >= 1) {
                dp[i][0] = max({dp[i-1][1], dp[i-1][2]}); //グーで負け
                dp[i][1] = max({dp[i-1][0] + s, dp[i-1][2] + s}); //チョキで勝つ
                dp[i][2] = max({dp[i-1][0], dp[i-1][1]}); //パーであいこ
            } else {
                dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]}); //グーで負け
                dp[i][1] = max({dp[i-1][0] + s, dp[i-1][1] + s, dp[i-1][2] + s}); //チョキで勝つ
                dp[i][2] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]}); //パーであいこ
            }
        }

        if (t[i-1] == 'r') { //敵がグー
            if (i - k >= 1) {
                dp[i][0] = max({dp[i-1][1], dp[i-1][2]}); //グーであいこ
                dp[i][1] = max({dp[i-1][0], dp[i-1][2]}); //チョキで負け
                dp[i][2] = max({dp[i-1][0] + p, dp[i-1][1] + p}); //パーで勝つ
            } else {
                dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]}); //グーであいこ
                dp[i][1] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]}); //チョキで負け
                dp[i][2] = max({dp[i-1][0] + p, dp[i-1][1] + p, dp[i-1][2] + p}); //パーで勝つ
            }
        }
    }

    ll ans = 0;

    for (ll i = 0; i < 3; ++i) {
        ans = max(ans, dp[n][i]);
    }

    cout << ans << endl;
}