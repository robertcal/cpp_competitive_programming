#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll a, b, x; cin >> a >> b >> x;

    if (x < a + b) {
        cout << 0 << endl;
        return 0;
    }

    ll left = 1;
    ll right = 1e9 + 7;

    while (right - left > 1) {
        ll mid = (left + right) / 2;

        ll t = a * mid + b * to_string(mid).size();

        if (x < t) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << min(left, 1000000000LL) << endl;
}