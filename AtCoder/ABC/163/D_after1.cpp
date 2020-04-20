#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    ll ans = 0;
    for (ll i = k; i <= n + 1; ++i) {
        ans += i * (n + 1 - i + n) / 2 - i * (i - 1) / 2 + 1;
        ans %= MOD;
    }

    cout << ans << endl;
}