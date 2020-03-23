#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int T; cin >> T;

    vector<long long> N(T);
    for (int k = 0; k < T; ++k) {
        cin >> N[k];
    }

    for (int i = 0; i < T; ++i) {
        for (int j = 1; j < N[i]; ++j) {
            int A, B;
            A = j;
            B = N[i] - j;

            int a, b;
            a = A;
            b = B;

            bool a4 = false;
            while (a > 0) {
                if (a % 10 == 4) {
                    a4 = true;
                }
                a /= 10;
            }

            if (a4) {
                continue;
            }

            bool b4 = false;
            while (b > 0) {
                if (b % 10 == 4) {
                    b4 = true;
                }
                b /= 10;
            }

            if (b4) {
                continue;
            }

            cout << "Case #" << i+1 << ": " << A << " " << B << endl;
            break;
        }
    }
}