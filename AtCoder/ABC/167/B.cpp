#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, b, c, k; cin >> a >> b >> c >> k;

    if (k <= a) {
        cout << k << endl;
        return 0;
    } else if (a < k && k <= a + b) {
        cout << a << endl;
        return 0;
    } else {
        cout << a - (k - a - b) << endl;
        return 0;
    }
}