#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

ll dp[1000010] = {};

int main() {

    ll x; cin >> x;

    dp[0] = 1;
    dp[100] = 1;
    dp[101] = 1;
    dp[102] = 1;
    dp[103] = 1;
    dp[104] = 1;
    dp[105] = 1;

    for (int i = 0; i < 1000010; ++i) {
        if (dp[i] == 1) {
            dp[i + 100] = 1;
            dp[i + 101] = 1;
            dp[i + 102] = 1;
            dp[i + 103] = 1;
            dp[i + 104] = 1;
            dp[i + 105] = 1;
        }
    }

    if (dp[x] == 1) {
        puts("1");
    } else {
        puts("0");
    }
}