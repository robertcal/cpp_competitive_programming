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
    for (int k = 0; k < N; ++k) {
        if (V[k] - C[k] > 0) {
            ans += V[k] - C[k];
        }
    }

    cout << ans << endl;
}