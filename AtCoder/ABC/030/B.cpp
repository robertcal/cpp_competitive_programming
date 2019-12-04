#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, m; cin >> n >> m;

    if (n >= 12) {
        n -= 12;
    }

    double a = (double)n / 12.0 * 360.0 + 360.0 / 12.0 * (double)m / 60.0;
    double b = (double)m / 60.0 * 360.0;

    if (abs(a - b) <= 180.0) {
        cout << setprecision(5) << abs(a - b) << endl;
    } else {
        cout << setprecision(5) << 360.0 - abs(a - b) << endl;
    }
}