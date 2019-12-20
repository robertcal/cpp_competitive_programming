#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        ans += i * 10000;
    }

    ans /= n;

    cout << ans << endl;
}