#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }

    ll dp[100010][5];

    for (int i = 0; i < n; ++i) {
        dp[i+1][0] = max(dp[i][1] + a[i], dp[i][2] + a[i]);
        dp[i+1][1] = max(dp[i][0] + b[i], dp[i][2] + b[i]);
        dp[i+1][2] = max(dp[i][0] + c[i], dp[i][1] + c[i]);
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
}