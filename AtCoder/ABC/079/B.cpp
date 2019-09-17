#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll dp[100];
    dp[0] = 2;
    dp[1] = 1;

    for (int i = 2; i <= 100; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    int n; cin >> n;

    cout << dp[n] << endl;
}