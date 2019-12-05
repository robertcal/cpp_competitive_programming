#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    double xa, ya, xb, yb, t, v; cin >> xa >> ya >> xb >> yb >> t >> v;
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        double x, y; cin >> x >> y;

        double l = sqrt((x - xa) * (x - xa) + (y - ya) * (y - ya)) + sqrt((x - xb) * (x - xb) + (y - yb) * (y - yb));

        if (l <= t * v) {
            puts("YES");
            return 0;
        }
    }

    puts("NO");
}