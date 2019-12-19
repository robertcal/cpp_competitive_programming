#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll dp[1000010] = {};

int main() {

    int n; cin >> n;

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i < n; ++i) {
        dp[i] = ((dp[i-1] + dp[i-2]) % 10007 + dp[i-3]) % 10007;
    }

    cout << dp[n-1] << endl;
}