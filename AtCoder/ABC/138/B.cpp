#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    long double t = 0;

    for (int i = 0; i < n; ++i) {
        long double a; cin >> a;

        t += 1.0 / a;
    }

    cout << fixed << setprecision(10) << 1.0 / t << endl;
}