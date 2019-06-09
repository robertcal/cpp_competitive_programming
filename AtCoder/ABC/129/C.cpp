#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, M; cin >> N >> M;

//    vector<int> a(M);
//    for (int i = 0; i < M; ++i) {
//        cin >> a[i];
//    }

    set<int> a;
    for (int i = 0; i < M; ++i) {
        int k; cin >> k;
        a.insert(k);
    }

    vector<long long> dp(N+2);
    for (int i = 0; i <= N; ++i) {
        dp[i] = -1;
    }

    dp[0] = 1;

    for (int i = 1; i <= N; ++i) {
//        auto result = find(a.begin(), a.end(), i);
//        if (result != a.end()) {
//            dp[i] = 0;
//            continue;
//        }

        auto result = a.find(i);
        if (result != a.end()) {
            dp[i] = 0;
            continue;
        }

        if (i == 1) {
            dp[i] = dp[0];
        } else {
            dp[i] = dp[i-1] + dp[i-2];
            dp[i] = dp[i] % 1000000007;
        }
    }

    cout << dp[N] << endl;
}