#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    vector<double> e(1010, 0);

    for (int i = 1; i < 1010; ++i) {
        for (int j = 1; j <= i; ++j) {
            e[i] += (double)j * (1.0 / (double)i);
        }
    }

    vector<int> p(n);

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<double> s(n+1, 0.0);

    for (int i = 0; i < n; ++i) {
        s[i+1] = s[i] + e[p[i]];
    }

    double ans = 0.0;

    for (int i = 0; i <= n-k+1; ++i) {
        ans = max(ans, s[i+k] - s[i]);
    }

    cout << setprecision(10) << fixed << ans << endl;
}