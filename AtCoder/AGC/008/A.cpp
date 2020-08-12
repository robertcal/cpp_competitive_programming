#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int x, y; cin >> x >> y;

    int ans = INF;
    if (x < y) {
        ans = min(ans, y - x);
    }

    x *= -1;
    if (x <= y) {
        ans = min(ans, y - x + 1);
    } else {
        if (y >= 0) {
            ans = min(ans, abs(y - x) + 2);
        } else {
            ans = min(ans, abs(y + x) + 2);
        }
    }

    cout << ans << endl;
}