#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    long double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    long double a = xb - xa;
    long double b = yb - ya;

    long double c = xc - xa;
    long double d = yc - ya;

    cout << setprecision(2) << fixed << abs(a * d - b * c) / 2.0 << endl;
}