#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    // 全コンテナのシミュレーションは間に合わない
    int n, q; cin >> n >> q;

    vector<int> down(n, -1);
    vector<int> top(n);
    for (int i = 0; i < n; ++i) {
        top[i] = i;
    }

    for (int i = 0; i < q; ++i) {
        int f, t, x; cin >> f >> t >> x;
        --f; --t; --x;

        int tmp1 = top[f];
        int tmp2 = top[t];

        top[f] = down[x];
        top[t] = tmp1;
        down[x] = tmp2;
    }

    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        int t = top[i];

        while (t >= 0) {
            ans[t] = i + 1;
            t = down[t];
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << endl;
    }
}