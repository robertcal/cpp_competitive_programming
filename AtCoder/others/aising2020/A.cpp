#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int l, r, d; cin >> l >> r >> d;

    int ans = 0;
    for (int i = 1; i <= 1000; ++i) {
        if (l <= d * i && d * i <= r) {
            ans++;
        }
    }

    cout << ans << endl;
}