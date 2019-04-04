#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }

    vector<int> dp(N);
    for (int k = 0; k < N; ++k) {
        dp[k] = INF;
    }

    dp[0] = 0;

    for (int j = 0; j < N-1; ++j) {
        dp[j+2] = min(dp[j+2], dp[j] + abs(h[j+2] - h[j]));
        dp[j+1] = min(dp[j+1], dp[j] + abs(h[j+1] - h[j]));
    }

    cout << dp[N-1] << endl;
}