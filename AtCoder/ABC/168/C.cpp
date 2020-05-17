#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    long double a, b, h, m;
    cin >> a >> b >> h >> m;

//    long double hs = 360.0 * h / 12.0 + 30.0 * m / 60.0;
//    long double ms = 360.0 * m / 60.0;
    long double hs = 360.0 * h * 5.0 + 30.0 * m;
    long double ms = 360.0 * m;

    long double t;
    if (hs >= ms) {
        t = hs - ms;
    } else {
        t = ms - hs;
    }

//    if ((int)t > 180) {
//        t = 360.0 - t;
//    }

    long double ans;
    if ((int)t == 0) {
        ans = abs(a - b);
    } else if ((int)t == 180) {
        ans = a + b;
    } else {
        //余弦定理
        long double res = a * a + b * b - 2.0 * a * b * cos(t * M_PI / (180.0 * 60.0));
        ans = sqrt(res);
    }

    cout << fixed << setprecision(15) << ans << endl;
}