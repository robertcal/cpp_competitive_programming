#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll c[200010] = {};

int main() {

    ll n; cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];

        c[a[i]]++;
    }

    ll sum = 0;

    for (ll i = 0; i < 200010; ++i) {
        ll t = c[i];

        sum += t * (t - 1) / 2;
    }

    for (ll i = 0; i < n; ++i) {
        ll t = c[a[i]];

        ll d = t * (t - 1) / 2 - (t - 1) * (t - 2) / 2;

        cout << sum - d << endl;
    }
}