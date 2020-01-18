#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k, s; cin >> n >> k >> s;

    if (s < 1000000000) {
        for (ll i = 0; i < k; ++i) {
            cout << s << ' ';
        }

        for (ll i = k; i < n; ++i) {
            cout << 1000000000 << ' ';
        }
    } else {
        for (ll i = 0; i < k; ++i) {
            cout << s << ' ';
        }

        for (ll i = k; i < n; ++i) {
            cout << 1 << ' ';
        }
    }
}