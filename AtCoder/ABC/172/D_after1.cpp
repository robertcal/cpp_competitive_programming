#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    vector<int> cnt(n + 1, 0);

    // 調和級数でlogn
    for (int i = 1; i <= n; ++i) {
        int t = i;

        while (t <= n) {
            cnt[t]++;
            t += i;
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += (ll)i * (ll)cnt[i];
    }

    cout << ans << endl;
}