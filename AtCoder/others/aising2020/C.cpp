#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    for (ll i = 1; i <= n; ++i) {
        ll sum = 0;

        for (ll x = 1; x * x <= i; ++x) {
            for (ll y = x; x * x + y * y <= i; ++y) {
                for (ll z = y; x * x + y * y + z * z <= i; ++z) {
                    if (x * x + y * y + z * z + x * y + y * z + z * x == i) {
                        set<ll> se;
                        se.insert(x);
                        se.insert(y);
                        se.insert(z);

                        if (se.size() == 1) {
                            sum += 1;
                        } else if (se.size() == 2) {
                            sum += 3;
                        } else {
                            sum += 6;
                        }
                    }
                }
            }
        }

        cout << sum << endl;
    }
}