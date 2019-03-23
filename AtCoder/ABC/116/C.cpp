#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }

    int ans = 0;
    bool line = false;
    bool all_zero = false;

    while (!all_zero) {
        line = false;
        all_zero = true;

        for (int j = 0; j < h.size(); ++j) {
            if (h[j] == 0) {
                line = false;
                continue;
            } else {
                --h[j];
                if (!line) {
                    ++ans;
                }
                line = true;
                all_zero = false;
            }
        }
    }

    cout << ans << endl;
}