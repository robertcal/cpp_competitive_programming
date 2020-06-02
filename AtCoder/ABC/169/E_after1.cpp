#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n % 2 == 0) {
        ll mn = a[n / 2] + a[n / 2 - 1];
        ll mx = b[n / 2] + b[n / 2 - 1];

        cout << mx - mn + 1 << endl;
    } else {
        ll mn = a[n / 2];
        ll mx = b[n / 2];

        cout << mx - mn + 1 << endl;
    }
}