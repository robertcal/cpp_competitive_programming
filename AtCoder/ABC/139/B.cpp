#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b; cin >> a >> b;

    int t = 1;
    int ans = 0;

    while (b > t) {
        t += a - 1;
        ++ans;
    }

    cout << ans << endl;
}