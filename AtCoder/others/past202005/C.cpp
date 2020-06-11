#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, r, n; cin >> a >> r >> n;

    if (r == 1) {
        cout << a << endl;
        return 0;
    }

    if (n == 1) {
        cout << a << endl;
        return 0;
    }

    ll t = a;
    ll cnt = 1;
    while (true) {
        t *= r;
        cnt++;

        if (t > 1e9) {
            puts("large");
            return 0;
        }

        if (cnt == n) {
            cout << t << endl;
            return 0;
        }
    }
}