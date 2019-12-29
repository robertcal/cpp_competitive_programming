#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, b, k; cin >> a >> b >> k;

    if (a >= k) {
        cout << a - k << ' ' << b <<  endl;
    } else if (a < k && b >= k - a) {
        cout << 0 << ' ' << b - (k - a) << endl;
    } else {
        cout << 0 << ' ' << 0 << endl;
    }
}