#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;
    vector<int> x(N);
    for (int i = 0; i < N; ++i) {
        cin >> x[i];
    }

    int ans = INF;
    int t = INF;
    for (int i = 0; i < N-K+1; ++i) { //N-K+1通りで全探索
        t = min(abs(x[i+K-1] - x[i]) + abs(x[i+K-1]), abs(x[i+K-1] - x[i]) + abs(x[i]));
        ans = min(t, ans);
    }

    cout << ans << endl;
}
