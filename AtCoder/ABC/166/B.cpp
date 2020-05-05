#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    vector<int> cnt(n, 0);

    for (int i = 0; i < k; ++i) {
        int d; cin >> d;

        for (int j = 0; j < d; ++j) {
            int a; cin >> a;
            --a;

            cnt[a]++;
        }
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        if (cnt[i] == 0) ++ans;
    }

    cout << ans << endl;
}