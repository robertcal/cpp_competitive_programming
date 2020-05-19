#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    long double a, b, h, m;
    cin >> a >> b >> h >> m;

    long double hs = 360.0 * h / 12.0 + 30.0 * m / 60.0;
    long double ms = 360.0 * m / 60.0;

    long double t;
    if (hs >= ms) {
        t = hs - ms;
    } else {
        t = ms - hs;
    }

    //余弦定理
    long double ans = sqrt(a * a + b * b - 2.0 * a * b * cos(t * M_PI / 180.0));

    cout << fixed << setprecision(15) << ans << endl;
}
