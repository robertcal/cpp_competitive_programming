#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    int n = s.size();

    vector<pair<int, string>> dp(n+5); //dp[i] i文字目までの分割の最大値
    for (int i = 0; i < n+5; ++i) {
        dp[i] = make_pair(0, "");
    }

    for (int i = 0; i < n+3; ++i) {

        if (i >= n) continue;

        if (to_string(s[i]) != dp[i].second) {
            dp[i+1].first = max(dp[i+1].first, dp[i].first + 1);
            dp[i+1].second = to_string(s[i]);
        }

        if (i >= n - 1) continue;

        if (to_string(s[i+1] + s[i]) != dp[i].second) {
            dp[i+2].first = max(dp[i+2].first, dp[i].first + 1);
            dp[i+2].second = to_string(s[i+1] + s[i]);
        }
    }

    cout << dp[n].first << endl;
}