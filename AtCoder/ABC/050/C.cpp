#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int c[100010] = {};

int main() {

    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        ++c[a];
    }

    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; ++i) {
            if(c[2 * i + 1] != 2) {
                cout << 0 << endl;
                return 0;
            }
        }
    } else {
        if (c[0] != 1) {
            cout << 0 << endl;
            return 0;
        }

        for (int i = 1; i <= n / 2; ++i) {
            if(c[2 * i] != 2) {
                cout << 0 << endl;
                return 0;
            }
        }
    }

    int ans = 1;

    for (int i = 0; i < n / 2; ++i) {
        ans *= 2;
        ans %= MOD;
    }

    cout << ans << endl;
}