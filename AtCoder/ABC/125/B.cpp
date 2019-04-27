#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }

    vector<int> C(N);
    for (int j = 0; j < N; ++j) {
        cin >> C[j];
    }

    int ans = 0;

    for (int bit = 0; bit < (1 << N); ++bit) {
        int sum_x = 0;
        int sum_y = 0;

        for (int k = 0; k < N; ++k) {
            if (bit & (1 << k)) {
                sum_x += V[k];
                sum_y += C[k];
            }
        }

        ans = max(ans, sum_x - sum_y);
    }

    cout << ans << endl;
}