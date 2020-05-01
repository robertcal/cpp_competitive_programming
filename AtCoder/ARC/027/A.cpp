#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int h, m; cin >> h >> m;

    int ans;

    if (m != 0) {
        ans = 60 * (18 - h - 1) + 60 - m;
    } else {
        ans = 60 * (18 - h);
    }

    cout << ans << endl;
}