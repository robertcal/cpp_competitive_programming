#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, L; cin >> N >> L;

    vector<int> R(N);

    int min_r = INF;
    int ans = 0;

    for (int i = 0; i < N; ++i) {
        R[i] = L + (i+1) - 1;
        if (abs(R[i]) < abs(min_r)) {
            min_r = R[i];
        }
        ans += R[i];
    }

    ans -= min_r;

    cout << ans << endl;
}