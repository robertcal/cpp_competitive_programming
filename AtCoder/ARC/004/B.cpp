#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    ll sum = 0;
    ll mx = 0;

    vector<ll> d(n);
    for (ll i = 0; i < n; ++i) {
        cin >> d[i];
        sum += d[i];
        mx = max(mx, d[i]);
    }

    cout << sum << endl;

    cout << max(0LL, mx - (sum - mx)) << endl;
}