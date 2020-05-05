#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll x; cin >> x;

    for (ll i = -1000; i <= 1000; ++i) {
        for (ll j = -1000; j <= 1000; ++j) {
            ll a = i * i * i * i * i;
            ll b = j * j * j * j * j;

            if (a - b == x) {
                cout << i << ' ' << j << endl;
                return 0;
            }
        }
    }
}