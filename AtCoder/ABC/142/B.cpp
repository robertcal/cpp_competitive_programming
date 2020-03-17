#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        int h; cin >> h;

        if (h >= k) ++ans;
    }

    cout << ans << endl;
}