#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);

    vector<ll> all;

    for (ll i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];

        all.push_back(a[i]);
        all.push_back(b[i]);
    }

    sort(all.begin(), all.end());

    if (n % 2 == 0) {
        //偶数
        ll ans = 0;
        ll up = all[(2 * n - 1) / 2 + 2] - all[(2 * n - 1) / 2 + 1] + 1;
        ll down = all[(2 * n - 1) / 2] - all[(2 * n - 1) / 2 - 1] + 1;

        ans = up + (down - 1);

        cout << ans << endl;
    } else {
        //奇数
        cout << all[2 * n - 2] - all[1] + 1 << endl;
    }
}