#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;

    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }

    vector<int> dp(K);
    for (int i = 0; i < K; ++i) {
        dp[i] = -INF;
    }

    vector<int> t;

    dp[0] = 0;
    dp[1] = max(V[0], V[N-1]);
    t.push_back(dp[1]);

    auto itr = find(V.begin(), V.end(), dp[1]);
    V.erase(itr);

    for (int i = 1; i <= K; ++i) {
        //取る場合
        dp[i+1] = dp[i] + max(V.front(), V.back());

        //戻す場合

    }
}