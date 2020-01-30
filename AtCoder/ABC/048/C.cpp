#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, x; cin >> n >> x;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll ans = 0;

    ans += max(0ll, a[0] - x);

    a[0] -= max(0ll, a[0] - x);

    for (int i = 0; i < n-1; ++i) {
        if (a[i+1] + a[i] > x) {
            ans += a[i+1] + a[i] - x;

            a[i+1] -= a[i+1] + a[i] - x;
        }
    }

    cout << ans << endl;
}