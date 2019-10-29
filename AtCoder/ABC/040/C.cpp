#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int dp[n+3];
    for (int i = 0; i < n+3; ++i) {
        dp[i] = INF;
    }

    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);

    for (int i = 2; i < n+3; ++i) {
        dp[i] = min(dp[i-1] + abs(a[i] - a[i-1]), dp[i-2] + abs(a[i] - a[i-2]));
    }

    cout << dp[n-1] << endl;
}