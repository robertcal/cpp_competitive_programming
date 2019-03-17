#include <bits/stdc++.h>

using namespace std;

int main() {

    int N; cin >> N;
    int T, A; cin >> T >> A;

    int ans = 0;
    double min_diff = 1000000;

    for (int i = 0; i < N; ++i) {
        int H;
        cin >> H;

        double t;
        t = T - H * 0.006;

        double diff;
        diff = abs(A - t);

        if (diff < min_diff) {
            min_diff = diff;
            ans = i + 1;
        }
    }

    cout << ans << endl;
}
