#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, h; cin >> n >> h;

    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    ll a_max = a[0];

    ll ans = 0;

    for (ll i = 0; i < n; ++i) {
        if (a_max < b[i]) {
            h -= b[i];
            ++ans;

            if (h <= 0) {
                break;
            }
        } else {
            break;
        }
    }

    if (h > 0) {
        if (h % a_max == 0) {
            ans += h / a_max;
        } else {
            ans += h / a_max + 1;
        }
    }

    cout << ans << endl;
}