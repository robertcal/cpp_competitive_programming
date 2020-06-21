#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    vector<ll> a(n);
    ll xo = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        xo ^= a[i];
    }

    for (ll i = 0; i < n; ++i) {
        cout << (xo ^ a[i]) << ' ';
    }

    cout << endl;
}