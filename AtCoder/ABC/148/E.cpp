#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    if (n % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    ll t10 = 10;
//    ll t50 = 50;
    ll t50 = 5;

//    while (n / t10 > 0) {
//        ans += (n / t10);
//
//        t10 *= 10;
//    }

//    while (n / t50 > 0) {
//        ans += (n / t50) - ((n / t50) / 2);
//
//        t50 *= 5;
//    }

    while (n / t50 > 0) {
        ans += (n / t50) - (((n / t50) + 1)/ 2);

        t50 *= 5;
    }

    cout << ans << endl;
}