#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, x; cin >> n >> x;

    ll l[60];
    ll p[60];

    l[0] = 1;
    p[0] = 1;

    for (ll i = 1; i <= 50; ++i) {
        l[i] = 2 * l[i-1] + 3;
        p[i] = 2 * p[i-1] + 1;
    }

    ll left = l[n];
    ll right = 1;

    ll t = p[n];

    ll ans = 0;

    while (left - right > 1) {
        ll mid = (left + right) / 2;

        if (mid <= x) {
            right = mid;
            ans += t / 2 + 1;
        } else {
            left = mid;
        }

        t /= 2;
    }

    cout << ans << endl;
}