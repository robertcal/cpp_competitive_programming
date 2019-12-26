#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int dp[310] = {};

    ++dp[n];

    int ng1, ng2, ng3; cin >> ng1 >> ng2 >> ng3;

    --dp[ng1];
    --dp[ng2];
    --dp[ng3];

    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 310; ++j) {
            if (dp[j] > 0) {
                if (j-1 >= 0 && dp[j-1] != -1) ++dp[j-1];
                if (j-2 >= 0 && dp[j-2] != -1) ++dp[j-2];
                if (j-3 >= 0 && dp[j-3] != -1) ++dp[j-3];
            }
        }
    }

    if (dp[0] > 0) {
        puts("YES");
    } else {
        puts("NO");
    }
}