#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    double l, x, y, s, d; cin >> l >> x >> y >> s >> d;

    double t;

    if (d >= s) {
        t = (d - s) / (x + y);
    } else {
        t = (l + d - s) / (x + y);
    }

    double i_t;

    if (x >= y) {
        i_t = INF;
    } else {
        if (s >= d) {
            i_t = (s - d) / (y - x);
        } else {
            i_t = (l + s - d) / (y - x);
        }
    }

    cout << setprecision(10) << fixed << min(t, i_t) << endl;
}