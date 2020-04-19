#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, a, b; cin >> n >> a >> b;

    if (a > b) {
        cout << 0 << endl;
        return 0;
    }

    if (n == 1 && a == b) {
        cout << 1 << endl;
        return 0;
    }

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    ll mn = a + b + a * (n - 2);
    ll mx = a + b + b * (n - 2);

    cout << mx - mn + 1 << endl;
}