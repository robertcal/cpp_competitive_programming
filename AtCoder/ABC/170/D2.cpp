#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll cnt[1000010] = {};

int main() {

    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (ll i = 0; i < n; ++i) {
        if (i >= 1) {
            if (a[i] == a[i - 1]) {
                cnt[a[i]] = 1;
            }
        }

        if (cnt[a[i]] == 1) continue;

        ll t = a[i] * 2;
        while(t <= 1000000) {
            cnt[t] = 1;
            t += a[i];
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        if (cnt[a[i]] == 0) ans++;
    }

    cout << ans << endl;
}