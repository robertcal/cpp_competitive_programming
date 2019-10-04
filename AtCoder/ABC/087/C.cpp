#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int a[2][n];

    for (int i = 0; i < n; ++i) {
        cin >> a[0][i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> a[1][i];
    }

    ll ans = 0;

    for (int i = 0; i < n; ++i) {
        ll sum = 0;
        for (int j = 0; j <= i; ++j) {
            sum += a[0][j];
        }

        for (int k = i; k < n; ++k) {
            sum += a[1][k];
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
}