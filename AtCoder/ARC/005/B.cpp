#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int x, y; cin >> x >> y;
    --x; --y;
    string w; cin >> w;

    string c[9];

    for (int i = 0; i < 9; ++i) {
        cin >> c[i];
    }

    int dx = 0;
    int dy = 0;

    if (w == "R") dx = 1;
    if (w == "L") dx = -1;
    if (w == "U") dy = -1;
    if (w == "D") dy = 1;

    if (w == "RU") {dx = 1; dy = -1;}
    if (w == "RD") {dx = 1; dy = 1;}
    if (w == "LU") {dx = -1; dy = -1;}
    if (w == "LD") {dx = -1; dy = 1;}

    for (int i = 0; i < 4; ++i) {
        cout << c[y][x];

        x += dx;
        y += dy;

        if (x < 0) {x += 2; dx = 1;}
        if (x > 8) {x -= 2; dx = -1;}
        if (y < 0) {y += 2; dy = 1;}
        if (y > 8) {y -= 2; dy = -1;}
    }

    cout << endl;
}