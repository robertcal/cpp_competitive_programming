#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll h, n; cin >> h >> n;

    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;

        h -= a;
    }

    if (h <= 0) {
        puts("Yes");
    } else {
        puts("No");
    }
}