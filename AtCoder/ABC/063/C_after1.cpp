#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int dp[110][10100] = {0};

int main() {

    int n; cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    dp[0][0] = 1;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= 10100; ++j) {
            if (dp[i][j] == 1) {
                dp[i+1][j + s[i]] = 1;
                dp[i+1][j] = 1;
            }
        }
    }

    for (int i = 10000; i > 0; --i) {
        if (i % 10 != 0 && dp[n][i] == 1) {
            cout << i << endl;
            return 0;
        }
    }

    cout << 0 << endl;
}