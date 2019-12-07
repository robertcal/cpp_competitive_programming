#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, t; cin >> n >> t;

    ll ans = 0;

    vector<ll> a(n+1);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    a[n] = 1LL << 60;

    for (int i = 0; i < n; ++i) {
        if (a[i+1] - a[i] < t) {
            ans += a[i+1] - a[i];
        } else {
            ans += t;
        }
    }

    cout << ans << endl;
}