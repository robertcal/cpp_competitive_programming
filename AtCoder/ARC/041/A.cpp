#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll x, y; cin >> x >> y;
    ll k; cin >> k;

    if (y >= k) {
        cout << x + k << endl;
    } else {
        cout << x + y - (k - y) << endl;
    }
}