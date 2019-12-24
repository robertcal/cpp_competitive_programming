#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    ll n = s.size() + 1;

    vector<ll> a(n, 0);

    for (ll i = 0; i < n-1; ++i) {
        if (s[i] == '<') {
            a[i+1] = max(a[i+1], a[i]+1);
        }
    }

    for (ll i = n-2; i >= 0; --i) {
        if (s[i] == '>') {
            a[i] = max(a[i], a[i+1]+1);
        }
    }

    ll ans = 0;

    for (ll i = 0; i < n; ++i) {
        ans += a[i];
    }

    cout << ans << endl;
}