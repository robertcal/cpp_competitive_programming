#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    vector<ll> s(n+1, 0);

    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;

        s[i+1] += s[i] + a;
    }

    ll ans = 0;

    bool conti = false;

    for (ll i = 0; i <= n; ++i) {
        for (ll j = i+1; j <= n; ++j) {
            if (s[j] - s[i] >= k) {
                ans += n - j + 1;
                conti = true;
                break;
            }
        }

        if (!conti) {
            break;
        }
    }

    cout << ans << endl;
}