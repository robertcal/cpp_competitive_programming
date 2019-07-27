#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<long long> A(N+1);
    for (int i = 0; i <= N; ++i) {
        cin >> A[i];
    }

    vector<long long> B(N);
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    long long ans = 0;

    for (int i = 0; i < N; ++i) {
        long long t = min(A[i], B[i]);
        A[i] -= t;
        B[i] -= t;
        ans += t;

        t = min(A[i+1], B[i]);
        A[i+1] -= t;
        B[i] -= t;
        ans += t;
    }

    cout << ans << endl;
}
