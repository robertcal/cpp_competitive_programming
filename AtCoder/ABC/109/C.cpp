#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, X; cin >> N >> X;

    vector<int> x(N);
    vector<int> d(N);
    for (int i = 0; i < N; ++i) {
        cin >> x[i];

        d[i] = abs(x[i] - X);
    }

    int ans = INF;
    ans = __gcd(d[0], d[1]);

    for (int i = 2; i < N; ++i) {
        ans = __gcd(ans, d[i]);
    }

    cout << ans << endl;
}