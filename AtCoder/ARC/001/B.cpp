#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int a, b; cin >> a >> b;

    int d = abs(b - a);

    int ans = INF;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 9; ++k) {
                for (int l = 0; l < 9; ++l) {
                    for (int m = 0; m < 41; ++m) {
                        for (int n = 0; n < 41; ++n) {
                            if (d == 10 * i - 10 * j + 5 * k - 5 * l + 1 * m - 1 * n) {
                                ans = min(ans, i+j+k+l+m+n);
                            }
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
}