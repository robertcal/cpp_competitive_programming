#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, b, n; cin >> a >> b >> n;

    ll ans = 0;
    if (n < b) {
        ans = (a * n) / b - a * (n / b);
    } else {
        //n >= b
        if (b == 1) {
            ans = 0;
        } else {
            ll t = b - 1;
            ll k = 1;
            while (t * k <= n) {
                ll s = t * k;
                ans = max(ans, (a * s) / b - a * (s / b));
                k++;
            }
        }
    }

    cout << ans << endl;
}