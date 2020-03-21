#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int x1, y1, r; cin >> x1 >> y1 >> r;
    x1 += 100;
    y1 += 100;

    int x2, y2, x3, y3; cin >> x2 >> y2 >> x3 >> y3;
    x2 += 100;
    y2 += 100;
    x3 += 100;
    y3 += 100;

    int d[210][210] = {};

    for (int i = x2; i <= x3; ++i) {
        for (int j = y2; j <= y3; ++j) {
            d[i][j] = 1;
        }
    }

    for (int i = 0; i < 210; ++i) {
        for (int j = 0; j < 210; ++j) {
            if ((x1 - i) * (x1 - i) + (y1 - j) * (y1 - j) <= r * r) d[i][j] += 2;
        }
    }

    bool red = false;
    bool blue = false;

    for (int i = 0; i <= 200; ++i) {
        for (int j = 0; j <= 200; ++j) {
            if (d[i][j] == 2) {
                red = true;
            }
            if (d[i][j] == 1) {
                blue = true;
            }
        }
    }

    if (red) {
        puts("YES");
    } else {
        puts("NO");
    }

    if (blue) {
        puts("YES");
    } else {
        puts("NO");
    }
}