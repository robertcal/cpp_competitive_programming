#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<vector<int>> t(25);

int main() {

    int n; cin >> n;

    for (int i = 0; i < n-1; ++i) {
        int b; cin >> b;
        --b;

        t[b].push_back(i+1);
    }

    int dp[25] = {};

    for (int i = n-1; i >= 0; --i) {
        if (t[i].size() == 0) {
            dp[i] = 1;
            continue;
        }

        int ma = 0;
        int mi = INF;

        for (auto v : t[i]) {
            ma = max(ma, dp[v]);
            mi = min(mi, dp[v]);
        }

        dp[i] = ma + mi + 1;
    }

    cout << dp[0] << endl;
}