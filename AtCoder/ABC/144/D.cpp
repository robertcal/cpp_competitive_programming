#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    double a, b, x; cin >> a >> b >> x;

    double degree;

    if ((a * a * b) / 2 >= x) {
        double l = (2.0 * x) / (a * b);

        double radian = atan2((double)l, (double)b);

        degree = radian * 180.0 / 3.141592653589793;

        cout << setprecision(10) << 90.0 - degree << endl;

        return 0;
    } else {
        double l = (2.0 * ((a * a * b) - x) / (a * a));

        double radian = atan2((double)l, (double)a);

        degree = radian * 180.0 / 3.141592653589793;

        cout << setprecision(10) << degree << endl;

        return 0;
    }
}
