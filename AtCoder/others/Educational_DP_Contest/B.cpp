#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;

    vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }

    vector<long long> dp(N+K);
    for (int i = 0; i < N+K; ++i) {
        dp[i] = INF;
    }

    //初期値設定
    dp[0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            dp[i+j+1] = min(dp[i+j+1], dp[i] + abs(h[i+j+1] - h[i]));
        }
    }

    cout << dp[N-1] << endl;
}
