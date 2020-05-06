#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

// j - i = Ai + Aj
// i + Ai = j - Aj

int main() {

    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    map<ll, ll> mp;
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        ll r = i - a[i]; //j - Ajを計算
        //rに等しいi + Aiの個数をansに足し算
        ans += mp[r];
        ll l = i + a[i];
        mp[l]++;
    }

    cout << ans << endl;
}