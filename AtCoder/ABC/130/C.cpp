#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll w, h, x, y; cin >> w >> h >> x >> y;

    ll m = 0;

    if (w == 2 * x && h == 2 * y) {
        m = 1;
    }

    cout << fixed << setprecision(10) << (double)(w * h) / 2.0 << ' ' << m << endl;
}