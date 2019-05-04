#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {

    int N; cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    //累積GCD
    vector<int> left(N+1, 0); //初期値を設定
    for (int j = 0; j < N; ++j) {
        left[j+1] = gcd(left[j], A[j]);
    }

    vector<int> right(N+1, 0); //初期値を設定
    for (int k = N-1; k >= 0; --k) {
        right[k] = gcd(right[k+1], A[k]);
    }

    int ans = 0;
    for (int l = 0; l < N; ++l) {
        ans = max(ans, gcd(left[l], right[l+1]));
    }

    cout << ans << endl;
}