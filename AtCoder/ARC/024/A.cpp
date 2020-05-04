#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int l, r; cin >> l >> r;

    int l_cnt[50] = {};
    int r_cnt[50] = {};

    for (int i = 0; i < l; ++i) {
        int t; cin >> t;
        l_cnt[t]++;
    }

    for (int i = 0; i < r; ++i) {
        int t; cin >> t;
        r_cnt[t]++;
    }

    int ans = 0;
    for (int i = 0; i < 50; ++i) {
        ans += min(l_cnt[i], r_cnt[i]);
    }

    cout << ans << endl;
}