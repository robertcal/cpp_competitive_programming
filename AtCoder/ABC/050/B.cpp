#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    ll sum = 0;

    vector<ll> t(n);
    for (ll i = 0; i < n; ++i) {
        cin >> t[i];
        sum += t[i];
    }

    ll m; cin >> m;
    for (ll i = 0; i < m; ++i) {
        ll p, x; cin >> p >> x;

        cout << sum - (t[p-1] - x) << endl;
    }
}