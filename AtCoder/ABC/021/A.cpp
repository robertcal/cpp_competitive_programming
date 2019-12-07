#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    for (int i = 0; i <= 10; ++i) {
        for (int j = 0; j <= 5; ++j) {
            for (int k = 0; k <= 3; ++k) {
                for (int l = 0; l <= 2; ++l) {
                    if (i + 2 * j + 4 * k + 8 * l == n) {
                        cout << i + j + k + l << endl;

                        if (i > 0) {
                            for (int m = 0; m < i; ++m) {
                                cout << 1 << endl;
                            }
                        }

                        if (j > 0) {
                            for (int m = 0; m < j; ++m) {
                                cout << 2 << endl;
                            }
                        }

                        if (k > 0) {
                            for (int m = 0; m < k; ++m) {
                                cout << 4 << endl;
                            }
                        }

                        if (l > 0) {
                            for (int m = 0; m < l; ++m) {
                                cout << 8 << endl;
                            }
                        }
                        return 0;
                    }
                }
            }
        }
    }
}