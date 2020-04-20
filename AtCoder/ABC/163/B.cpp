#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m; cin >> n >> m;
    ll sum = 0;
    for (ll i = 0; i < m; ++i) {
        ll a; cin >> a;
        sum += a;
    }

    if (n >= sum) {
        cout << n - sum << endl;
    } else {
        cout << -1 << endl;
    }
}