#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> W(N);
    for (int i = 0; i < N; ++i) {
        cin >> W[i];
    }

    int ans = INF;

    for (int i = 0; i < N; ++i) {
        int S_1 = 0;
        int S_2 = 0;

        for (int j = 0; j <= i; ++j) {
            S_1 += W[j];
        }

        for (int k = i+1; k < N; ++k) {
            S_2 += W[k];
        }

        ans = min(ans, abs(S_1 - S_2));
    }

    cout << ans << endl;
}