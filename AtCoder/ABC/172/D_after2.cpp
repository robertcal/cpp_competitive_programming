#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    ll ans = 0;
    for (ll i = 1; i <= n; ++i) {
        ll t = n / i; // nまでにiの倍数が何個あるか

        ans += i * t * (t + 1) / 2; // iの倍数の数分を答えに足す
    }

    cout << ans << endl;
}