#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, a, b; cin >> n >> a >> b;

    ll t = a + b;

//    bool over = false;
//
//    ll p = 0;
//    for (ll i = 0; i < 1000; ++i) {
//        p += t;
//        if (n < p) {
//            over = true;
//            break;
//        }
//    }

//    if (over) {
        ll v = n / t;

        ll p = n % t;

        ll sum = a * v + min(p, a);

        cout << sum << endl;
        return 0;
//    } else {
//        cout << a * 1000 << endl;
//        return 0;
//    }
}