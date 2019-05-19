#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    double N;
    int K;
    cin >> N;
    cin >> K;

    int n;
    int k;
    double p;
    double ans = 0;

    if (N >= K) {
        n = K - 1;



    } else {
        for (int i = N; i >= 1; --i) {
            k = K;
            p = 1;
            for (int j = 1; j <= 17; ++j) {
                p = p * 0.5;
                if (k % 2 == 0) {
                    k = k / 2;
                    if (i >= k) {
                        ans += (1 / N) * p;
                        break;
                    }
                } else {
                    k = k / 2;
                    if (i > k) {
                        ans += (1 / N) * p;
                        break;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}