#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, a, b; cin >> n >> a >> b;

    if ((b - a) % 2 == 0) {
        cout << (b - a) / 2 << endl;
        return 0;
    } else {
        ll l = a - 1;
        ll r = n - b;

        if (l <= r) {
            ll t1 = b - 1;

            if (b - a <= 1) {
                cout << t1 << endl;
                return 0;
            }

            ll t2 = ((b - ((a - 1) * 2 + 1)) - a) / 2 + ((a - 1) * 2 + 1);

            cout << t2 << endl;
            return 0;
        } else {
            ll t1 = n - a;

            if (b - a <= 1) {
                cout << t1 << endl;
                return 0;
            }

            ll t2 = (b - (a + (((n - b) * 2) + 1))) / 2 + (((n - b) * 2) + 1);

            cout << t2 << endl;
            return 0;
        }
    }
}