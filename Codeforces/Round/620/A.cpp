#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; ++i) {
        int x, y, a, b; cin >> x >> y >> a >> b;

        int d = y - x;

        int m = a + b;

        if (d % m == 0) {
            int second = d / m;

            cout << second << endl;
        } else {
            puts("-1");
        }
    }
}