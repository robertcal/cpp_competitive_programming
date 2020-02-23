#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int t; cin >> t;

    int a_n[7] = {1, 0, 0, 1, 0, 1, 1};
    int b_n[7] = {0, 1, 0, 1, 1, 0, 1};
    int c_n[7] = {0, 0, 1, 0, 1 ,1, 1};

    for (int i = 0; i < t; ++i) {
        int a, b, c; cin >> a >> b >> c;

        int ans = 0;

        for (int j = 0; j < (1 << 7); ++j) {
            int sum = 0;

            int a_t = a;
            int b_t = b;
            int c_t = c;
            for (int k = 0; k < 7; ++k) {
                if (j & (1 << k)) {
                    if (a_t >= a_n[k]) {
                        a_t -= a_n[k];
                    } else {
                        continue;
                    }

                    if (b_t >= b_n[k]) {
                        b_t -= b_n[k];
                    } else {
                        continue;
                    }

                    if (c_t >= c_n[k]) {
                        c_t -= c_n[k];
                    } else {
                        continue;
                    }

                    ++sum;
                }
            }

            ans = max(ans, sum);
        }

        cout << ans << endl;
    }
}