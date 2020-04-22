#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    double ans = 0;

    for (int i = 0; i < n; ++i) {
        double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        ans = max(ans, a + b + c + d + e * 110 / 900);
    }

    cout << fixed << setprecision(10) << ans << endl;
}