#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int ans = 0;
    if (n % 10 <= 6) {
        ans += (n % 10) * 15;
    } else {
        ans += 100;
    }

    ans += (n / 10) * 100;

    cout << ans << endl;
}