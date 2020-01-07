#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    int max_l = 0;
    int min_r = INF;

    for (int i = 0; i < m; ++i) {
        int l, r; cin >> l >> r;

        max_l = max(max_l, l);
        min_r = min(min_r, r);
    }

    if (max_l > min_r) {
        cout << 0 << endl;
    } else {
        cout << min_r - max_l + 1 << endl;
    }
}