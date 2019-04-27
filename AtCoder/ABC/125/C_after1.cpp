#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int ans = 0;

    for (int j = 0; j < N-1; ++j) {
        int gcd = 0;
        vector<int> B(N);

        B = A;
        B.erase(B.begin() + j);

        if (B.size() == 1) {
            gcd = B[0];
        }

        for (int k = 0; k < N-2; ++k) {
            if (k == 0) {
                gcd = __gcd(B[k], B[k+1]);
            } else {
                gcd = __gcd(gcd, __gcd(B[k], B[k+1]));
            }
        }

        ans = max(ans, gcd);
    }

    cout << ans << endl;
}