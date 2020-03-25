#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    for (int i = 0; i <= m - 2 * n; ++i) {
        if (m - 2 * n - 2 * i >= 0 && 3 * n - m + i >= 0) {
            cout << 3 * n - m + i << " " << m - 2 * n - 2 * i << " " << i << endl;
            return 0;
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;
}