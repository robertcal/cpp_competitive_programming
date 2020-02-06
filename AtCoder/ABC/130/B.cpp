#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, x; cin >> n >> x;

    int d = 0;
    int ans = 0;

    while (d <= x && ans <= n) {
        ++ans;

        int l; cin >> l;

        d += l;
    }

    cout << ans << endl;
}