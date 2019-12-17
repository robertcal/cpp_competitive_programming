#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, x; cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < 20; ++i) {
        if (x & (1 << i)) {
            ans += a[i];
        }
    }

    cout << ans << endl;
}