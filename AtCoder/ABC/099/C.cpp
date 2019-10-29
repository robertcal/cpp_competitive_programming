#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int dp[100010];

    for (int i = 0; i < 100010; ++i) {
        dp[i] = INF;
    }

    dp[0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int pow6 = 1; i + pow6 <= n; pow6 *= 6) {
            dp[i + pow6] = min(dp[i + pow6], dp[i] + 1);
        }

        for (int pow9 = 1; i + pow9 <= n; pow9 *= 9) {
            dp[i + pow9] = min(dp[i + pow9], dp[i] + 1);
        }
    }

    cout << dp[n] << endl;
}