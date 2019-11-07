#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    vector<ll> s(n, 0);
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;
        if (i == 0) {
            s[i] = a;
        } else {
            s[i] = s[i-1] + a;
        }
    }

    ll ans = 1LL<<60;

    for (ll i = 0; i < n-1; ++i) {
        ans = min(ans, abs(s[i] - (s[n-1] - s[i])));
    }

    cout << ans << endl;
}