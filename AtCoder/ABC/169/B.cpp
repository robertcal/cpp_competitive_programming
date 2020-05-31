#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll ans = a[0];

    for (ll i = 1; i < n; ++i) {
        if (ans == 0) {
            cout << ans << endl;
            return 0;
        }

        if ((ll)2e18 / ans < a[i]) {
            cout << -1 << endl;
            return 0;
        }

        ans *= a[i];

        if (ans > (ll)1e18) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;
}