#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b; cin >> a >> b;

    ll ans;

    if (a < 0 && 0 < b) {
        ans = abs(a - b) - 1;
    } else {
        ans = abs(a - b);
    }

    cout << ans << endl;
}