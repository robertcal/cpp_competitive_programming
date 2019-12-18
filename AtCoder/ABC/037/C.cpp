#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    vector<ll> s(n);
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;

        if (i == 0) {
            s[i] = a;
        } else {
            s[i] += s[i-1] + a;
        }
    }

    ll ans = 0;

    for (int i = 0; i < n-k+1; ++i) {
        if (i == 0) {
            ans += s[i+k-1];
        } else {
            ans += s[i+k-1] - s[i-1];
        }
    }

    cout << ans << endl;
}