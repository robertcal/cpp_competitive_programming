#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int l, h; cin >> l >> h;

    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        if (a < l) {
            cout << l - a << endl;
        }

        if (l <= a && a <= h) {
            cout << 0 << endl;
        }

        if (a > h) {
            cout << -1 << endl;
        }
    }
}