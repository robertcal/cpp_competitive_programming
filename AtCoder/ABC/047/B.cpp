#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int w, h, n; cin >> w >> h >> n;

    int x1 = 0;
    int x2 = w;
    int y1 = 0;
    int y2 = h;

    for (int i = 0; i < n; ++i) {
        int x, y, a; cin >> x >> y >> a;

        if (a == 1) {
            x1 = max(x1, x);
        }

        if (a == 2) {
            x2 = min(x2, x);
        }

        if (a == 3) {
            y1 = max(y1, y);
        }

        if (a == 4) {
            y2 = min(y2, y);
        }
    }

    if (x2 - x1 < 0 || y2 - y1 < 0) {
        cout << 0 << endl;
    } else {
        cout << (x2 - x1) * (y2 - y1) << endl;
    }
}