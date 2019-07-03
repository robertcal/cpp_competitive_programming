#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    int vx1 = x2 - x1;
    int vy1 = y2 - y1;

    cout << x2 - vy1 << " " << y2 + vx1 << " " << x2 - vy1 - vx1 << " " << y2 + vx1 - vy1 << endl;
}