#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    map<int, int, greater<int>> ma;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        ma[a]++;
    }

    for (int i = 0; i < m; ++i) {
        int b, c; cin >> b >> c;

        ma[c] += b;
    }

    ll ans = 0;
    int cnt = 0;

    for (auto t : ma) {
        if (cnt + t.second > n) {
            ans += (ll)(n - cnt) * (ll)t.first;
            break;
        } else {
            ans += (ll)t.first * (ll)t.second;
            cnt += t.second;
        }
    }

    cout << ans << endl;
}