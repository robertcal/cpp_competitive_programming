#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    ll ans = 1;

    for (ll i = 1; i <= n; ++i) {
        ans *= i;
        ans = ans % 1000000007;
    }

    cout << ans << endl;
}