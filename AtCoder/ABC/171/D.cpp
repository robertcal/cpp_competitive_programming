#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    ll sum = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        mp[a[i]]++;
    }

    ll q; cin >> q;
    for (ll i = 0; i < q; ++i) {
        ll b, c; cin >> b >> c;

        ll t = (c - b) * mp[b];
        mp[c] += mp[b];
        mp[b] = 0;
        sum += t;

        cout << sum << endl;
    }
}