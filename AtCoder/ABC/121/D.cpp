#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, b; cin >> a >> b;

    ll ans = 0;

    if ((b - a) % 4 == 1 || (b - a) % 4 == 2) {
        ans += 1;
    }

    ll i = 2;

    while (b >= i) {
        ll t = 0;

//        if (a / i == b / i) {
//            t += (b % i - a % i) % 2;
//        } else {
            if ((a / i) % 2 == 1) {
                t += a % i;
            }

            if ((b / i) % 2 == 1) {
                t += b % i;
                t += 1;
            }
//        }

        if (t % 2 == 1) {
            ans += i;
        }

        i *= 2;
    }

    cout << ans << endl;
}