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

    sort(a.rbegin(), a.rend());

    ll ans = 0;
//    ans += a[0];
    for (ll i = 1; i < n; ++i) {
        ans += a[i / 2];
    }

    cout << ans << endl;
}