#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n; cin >> n;

    ll ans = n - 1;

    for (ll i = 1; i < 10000000; ++i) {
        if (n % i == 0) {
            ans = min(((i - 1) + (n / i - 1)), ans);
        }
    }

    cout << ans << endl;
    return 0;
}