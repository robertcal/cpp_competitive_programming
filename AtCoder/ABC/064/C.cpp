#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int t[9] = {};

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        if (1 <= a && a <= 399) {
            t[0]++;
        }

        if (400 <= a && a <= 799) {
            t[1]++;
        }

        if (800 <= a && a <= 1199) {
            t[2]++;
        }

        if (1200 <= a && a <= 1599) {
            t[3]++;
        }

        if (1600 <= a && a <= 1999) {
            t[4]++;
        }

        if (2000 <= a && a <= 2399) {
            t[5]++;
        }

        if (2400 <= a && a <= 2799) {
            t[6]++;
        }

        if (2800 <= a && a <= 3199) {
            t[7]++;
        }

        if (3200 <= a) {
            t[8]++;
        }
    }

    int type = 0;

    for (int i = 0; i < 8; ++i) {
        if (t[i] > 0) {
            type++;
        }
    }

    cout << max(type, 1) << ' ' << type+t[8] << endl;
}