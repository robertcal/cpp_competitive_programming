#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll x; cin >> x;

    ll sum = 100;
    ll ans = 0;
    while(true) {
        ++ans;
        sum = sum + sum / 100;

        if (sum >= x) {
            cout << ans << endl;
            return 0;
        }
    }
}