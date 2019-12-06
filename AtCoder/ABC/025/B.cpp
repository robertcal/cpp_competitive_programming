#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, a, b; cin >> n >> a >> b;

    int p = 0;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        int d; cin >> d;

        if (s == "East") {
            if (d < a) {
                p += a;
            } else if (a <= d && d <= b) {
                p += d;
            } else {
                p += b;
            }
        }

        if (s == "West") {
            if (d < a) {
                p -= a;
            } else if (a <= d && d <= b) {
                p -= d;
            } else {
                p -= b;
            }
        }
    }

    if (p < 0) {
        cout << "West" << " " << abs(p) << endl;
        return 0;
    }

    if (p > 0) {
        cout << "East" << " " << p << endl;
        return 0;
    }

    cout << p << endl;
}