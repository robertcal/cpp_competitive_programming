#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {
    int c[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> c[i][j];
        }
    }

    bool ans = false;

    for (int i = 0; i <= 100; ++i) {
        for (int j = 0; j <= 100; ++j) {
            if (i + j == c[0][0]) {
                int a[3];
                int b[3];
                a[0] = i;
                b[0] = j;

                a[1] = i + c[1][0] - c[0][0];
                a[2] = i + c[2][0] - c[0][0];

                b[1] = j + c[0][1] - c[0][0];
                b[2] = j + c[0][2] - c[0][0];

                bool t = true;

                for (int k = 0; k < 3; ++k) {
                    for (int l = 0; l < 3; ++l) {
                        if (c[k][l] != a[k] + b[l]) {
                            t = false;
                        }
                    }
                }

                if (t) {
                    ans = true;
                }
            }
        }
    }

    if (ans) {
        puts("Yes");
    } else {
        puts("No");
    }
}