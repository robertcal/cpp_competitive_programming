#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m, q; cin >> n >> m >> q;

    vector<int> cnt(n + 10, 0);
    for (int i = 0; i < m; ++i) {
        int l, r; cin >> l >> r;
        --l; --r;

        cnt[l]++;
        cnt[r + 1]--;
    }

    for (int i = 0; i < n + 9; ++i) {
        cnt[i + 1] += cnt[i];
    }

    for (int i = 0; i < q; ++i) {
        int p, q; cin >> p >> q;
        --p; --q;

        int plus = 0;
        int minus = 0;
        for (int j = p; j <= q; ++j) {
            if (cnt[j] > cnt[j - 1]) {
                plus += cnt[j] - cnt[j - 1];
            }
        }

        for (int j = p + 1; j <= q + 1; ++j) {
            if (cnt[j] < cnt[j - 1]) {
                minus += cnt[j] - cnt[j - 1];
            }
        }


    }
}