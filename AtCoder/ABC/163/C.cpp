#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> ans(n, 0);

    for (ll i = 2; i <= n; ++i) {
        ll a; cin >> a;
        a--;
        ans[a]++;
    }

    for (ll i = 0; i < n; ++i) {
        cout << ans[i] << endl;
    }
}