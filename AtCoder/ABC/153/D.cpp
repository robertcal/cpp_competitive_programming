#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll h; cin >> h;

    ll t = 1;

    ll ans = 0;

    while (t <= h) {
        ans += t;
        t *= 2;
    }

    cout << ans << endl;
}