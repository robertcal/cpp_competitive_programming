#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int D, N; cin >> D >> N;

    if (D == 0) {
        if (N == 100) {
            puts("101");
        } else {
            cout << N << endl;
        }
    }

    if (D == 1) {
        if (N == 100) {
            puts("10100");
        } else {
            cout << N * 100 << endl;
        }
    }

    if (D == 2) {
        if (N == 100) {
            puts("1010000");
        } else {
            cout << N * 10000 << endl;
        }
    }
}